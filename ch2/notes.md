Undefined Behaviorists
----------------
  - *Undefined Behavior* is part of the ANSI C standard that says that certain
    code patterns leave to weird stuff happening in the compiler
    - It's basically impossible to completely avoid UB, so just learn to
      recognize where a smell for possible UB exists. 
  - Don't write code like this
  - C defined strings as blocks of memory that terminate in a NUL byte or 0 byte

C is a pretty ugly language
----------------
  - You're supposed to read KnR after this book.
  a) Watch video
  b) Code exercise
  c) Read explanation

Setting up environment for development
----------------
  - Mac switched from GCC to Clang
  - Debugging
    - for Mac it's `lldb`
