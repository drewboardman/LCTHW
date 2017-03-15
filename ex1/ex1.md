Dust off that compiler
----------------
  - he's got a repo with all the exercises and lecture stuff in it
  - you *build* the file by running `make` with the program name as the
    argument. I'm not sure if it needs to match the name of the .c file

example: `make ex1`

  - what this really does is run `clang` on the .c file. You can see this
    actually command executed below the `make` command
    - it's like `cc ex1.c -o ex1`
  - run the file like any executable `./ex1`

Breaking it
----------------
  - When you try to remove the `distance` arg from the `printf` function, you
    get this crazy number when you execute the program

```C
ex1 master % ./ex1
You are 1471179368 miles away.
```

  - C operates on raw, straight memory. In other languages (like Ruby or Java),
    you have a virtual machine that protects you from making these same mistakes

  - So, just because you didn't supply a parameter to the `printf` function,
    doesn't mean that C is going to know about it. It looks at the memory
    address for the argument (the one you said you were going to provide), and it
    returns whatever is there. In this case it was `1471179368`.
