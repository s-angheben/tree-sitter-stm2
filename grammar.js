module.exports = grammar({
  name: 'smt2',

  rules: {
    source_file: $ => repeat($._specification),

      _specification: $ => choice(
          $.declaration,
          $.assertion,
          $.commands
      ),

      commands: $ => choice(
          seq('(', 'check-sat', ')'),
          seq('(', 'get-model', ')'),
          seq('(', 'exit', ')'),
      ),

      assertion: $ => seq(
          '(',
          'assert',
          $.logical_exp,
          ')'
      ),

      logical_exp: $ => choice(
          $.identifier,
          seq('(', 'not', $.logical_exp, ')'),
          seq('(', 'or', $.logical_exp, repeat1($.logical_exp), ')'),
          seq('(', 'and', $.logical_exp, repeat1($.logical_exp), ')'),
          seq('(', '=>', $.logical_exp, $.logical_exp, ')')
      ),

      declaration: $ => seq(
          '(',
          'declare-const',
          $.identifier,
          $._type,
          ')'
      ),

      _type: $ => choice(
          'Bool'
      ),

      identifier: $ => /[A-Za-z0-9]+/
  }
});
