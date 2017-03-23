Formatted String
===================
  - there isn't much different here than the last exercise, but he does give
    some more info in the video (that isn't in the book)
  - he says that `main` doesn't *technically* require you to have args. He also
    hints that the `*` in `*argv[]` refers to a pointer.

Extra Credit
===================
`printf` escape codes and format sequences
------------
  - *escape codes* are things like `\n` and `\t`
  - *format sequences* are things like `%d` and `%s`

Escape codes/sequences
----------------
  - the reason they exist at all, is because trying to do something like `\n`
    would probably result in code that is not valid/won't compile.

Example
```C
#include <stdio.h>

int main()
{
    printf("I want this,
    on two lines.");

  return 0;
}
```
When you `make` this you just get `error: expected expression`

  - on wikipedia, they say to us %c as a string formatter, and use the newline
    numerical value in ASCII as the parameter
```C
printf("I want this %con 2 lines, 0x0a");
```
This replaces the %c with a byte whose numerical value is 0x0a. This *will not
work* on systems that don't use 0x0a as the new line value, or that just don't
use ASCII at all.

The best way to do it is to use `\n` - since this is portable along different
systems.

  - the way that escape characters work, is that the compiler sees the `\`
    character, and expects another character to complete the *escape sequence*
