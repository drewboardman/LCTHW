using lldb
-----------
  - you need to run the executable directly with using `lldb`
```bash
drew> lldb ./ex4
(lldb) target create "./ex4"
Current executable set to './ex4' (x86_64).
```
  - if you didn't `make` the `.c` file with the option to give debugging symbols
    (which is the `-g` in `-Wall -g`), then you won't get all the functionality
of the debugger
