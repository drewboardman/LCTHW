  - Everything in C ends with a semicolon, except for at the end of structs
  - In C, you zero index arrays just like in pretty much any language (except
    Scala tuples...)
    - However, arrays are terminated by a null byte

```C
  char myArr[] = "drew";
  drew[4] = 'A';

  printf("%s", drew);
```
  this outputs `drewX��V`

  - The reason for unsigned vs signed is that you are only allocated a certain
    amount of space for numbers
    - when you have a signed bit, you split that memory allocation among the
      negative side and positive side.
    - and unsigned bit can be twice as large on the positive number range. You
      get an additional bit added to the end.
  - a `char` is just a very small integer value in C
