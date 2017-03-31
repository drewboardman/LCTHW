Pointers
--------
  - They reference the memory address of some data structure
  - These two syntaxes are equivalent

```C
char *names[] = {
  "Drew", "Alex"
}

char **name_pointer = names;

char first_name[] = *(name_pointer + 0);
char first_name_different_syntax[] = name_pointer[0];
```

Pointer syntax notes from video
-------------------------------

#### 1. `<type> *ptr = <value>;` - a pointer of type `<type>` with the variable name `ptr`

  - So imagine RAM as a giant array that just holds your value at certain memory
    addresses.
  - If a value is the actual chunk of memory, the pointer is the array(RAM array)
    index of that chunk of memory
    - it's *one level indirection*

#### 2. `*ptr` - the value of whatever is being pointed at
  - So if you have

```C
int my_num = 1;
int *my_num_ptr = &my_num;

printf("print the prt here %d\n", *my_num_ptr);
```
  - When you use the `*` it *de-references* the pointer

#### 3. `&` gives you the address of something
  - `&thing` is the opposite of `*thing`
  - if you use arrays, you automatically get to reference the memory address of
    the thing you want.
  - if it's a single value you'll need to use the `&` to get the address of the
    thing
