module.exports = grammar({
  name: 'smt2',

  extras: $ => [
    $.comment,
    /\s/
  ],

  rules: {
    source_file: $ => repeat($._specification),

      _specification: $ => choice(
          $.declaration,
          $.assertion,
          $.commands,
          $.comment
      ),

      comment: $ => token(
          seq(';', /.*/)
      ),

      commands: $ => choice(
          seq('(', 'check-sat', ')'),
          seq('(', 'get-model', ')'),
          seq('(', 'exit', ')'),
      ),

      assertion: $ => seq(
          '(',
          'assert',
          field('statement', $.logical_exp),
          ')'
      ),

      logical_exp: $ => choice(
          $.identifier,
          seq('(', field('operator', 'not'), $.logical_exp, ')'),
          seq('(', field('operator', 'or'), $.logical_exp, repeat1($.logical_exp), ')'),
          seq('(', field('operator', 'and'), $.logical_exp, repeat1($.logical_exp), ')'),
          seq('(', field('operator', '=>'), $.logical_exp, $.logical_exp, ')')
      ),

      declaration: $ => seq(
          '(',
          'declare-const',
          field('name', $.identifier),
          field('type', $._type),
          ')'
      ),

      _type: $ => choice(
          'Bool'
      ),

      identifier: $ => /[A-Za-z0-9]+/
  }
});
