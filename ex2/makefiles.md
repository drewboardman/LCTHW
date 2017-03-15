Makefiles
---------
  - it's like a Rakefile or build.sbt or any build tool
  - you can declare tasks in it, and it will run the first task it hits by
    default
  - the command `cc -Wall` tells clang (or gcc) to report all warnings
  - the option `-g` gives you debug
  - In the projects you looked at, it just named the file `Makefile`. But in the
    exercise he has you name it with a `.mak` file extension
    - Actually, later he says the `make` will automatically run any file named
      `Makefile` that it finds in the dir

Structure
========
  - start off with the `ENV` variables
  - then add tasks, which are just declared at top level with `:`
  - he claims that `make` will execute the first task it encounters
