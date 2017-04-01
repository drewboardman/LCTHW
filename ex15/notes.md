Pointers
--------
  - NOTE: Shaw mentions that pointers were incredibly useful before modern compiler optimization. Often, modern compilers use arrays in the same way that a pointer would be used. So it is usually just as efficient to use an array.
  - They reference the memory address of some data structure
  - These two syntaxes are equivalent

```c
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

```c
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

Explaining Pointers
-------------------
  Q: if `i` is an index, then what is `ages`?
  A: it's the location in memory where all the integers in `ages` *start*. Think of it as the *address* of the first *integer* in `ages`

  - So when you do something like `ages[i]`, the compiler will take the *base address* of `ages` and find the block that is `i` away from that address

Practical Pointer Usage
-----------------------

  1. Ask the operating system for a chunk of memory, either to use as a string or a struct.
  2. You can pass large blocks of memory to a function using a pointer, which is more efficient than passing the actual block of memory around.
  3. It can be used for callback functions. You ask for a pointer to a function, then use that pointer as an argument to another function.
  4. Used in network programming to do parsing and other things.


