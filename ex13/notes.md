  - basically the same as all `for` loops
  - *incrementer* condition runs after each loop
  - all of the terms in a `for()` condition encapsulates what would be seen in a
    properly written `while` loop

```C
  for(i=0; i < 5; i++) {};
```
encapsulates
```C
  int i = 0;
  while(i<5)
{
  i++;
};
```

  - Remember that `argv[0]` is the name of the C executable that's called. So in
    this case `argv[0] == ./ex13`

#### Array of `char` strings using *
  - the *splat* `*` in C is used pretty much the same as in Ruby
  - an array of `char` (i.e. a string) is `char mystring[]`
  - so an array of those is `char *myarray_of_strings[]`
  - This actually creates a *2 dimensional* array

#### Comma operator
  - The `,` is an operator in C, and evaluates it's left-hand side then
    immediatley discards the results.
  - It has the lowest precedence cardinality of any C operator
  - It's mostly used in for loops, but has very little occurence
  - Look at this example

```C
if(y=f(x), y > x) {
  ...
}
```
