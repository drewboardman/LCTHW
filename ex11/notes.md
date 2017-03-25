Strings in C are *super* broken

  - you can initialize an array with braces in modern C.
    - didn't used to be able to do this
    - he says that it's a 'convenience hack'

```C
  int numbers[4] = { 0 };
```
  
  - For `char` arrays, when you initialize it with size `x` it will fill in the
    missing indexes with `0`.
  - But notice that this means you NEED to end a string with a `'\0'` null
    terminator if you "fill" it up. So if you satisfy the instantiated `sizeOf`
- you need to have the last index be a null byte

```C
  char string_example[4] = { 'a' };
```

  - This will fill in 3 `0` values, since it's `sizeOf == 4` and you only
    initialized the `string_example[0]` index

  - Don't forget that you need the `null` byte `'\0'` at the end of `char`
    arrays

## Aside on bits & bytes
  - bits are the smallest unit of information that can be stored on a computer
    - they are 0 or 1 and can be used to represent binary information
  - *bytes* are the minimum number of bits needed to represent a character (such
    as a letter)
    - bytes contain 8 bits each
    - for example `A` is `01000001`
