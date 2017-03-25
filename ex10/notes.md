  - for languages like ruby, switch statements and if statements are the same
    thing to the interpreter
  - in C, switch statements are really compiled into jump tables
  - all the `case` values need to be able to evaluate to integers. So when you
    have a `char` in there - it evaluates to its ASCII (`int`) value.

### Jump Tables
  - he explains this as
  1. The compiler marks the place in the program where the evaluation of each
     letter should start. Call this `prime`
  2. Each case block is registered as its distance from prime. So `case
     'y':` would be `prime + 121`
  3. As the program runs, it figures out the `prime + arg` value, and find that
     same value in the jump table
