Heap vs Stack
-------------
  - every time you call `malloc()`, that's *heap*
    - everything else is *stack*

### Plan
  1. Get the structures compiling, and just have a fake `main` function
  2. Implement `Address_print`, and then the other Address functions
  3. Get `die` to work
  3. Get `open` to work in little bits

### Some notes about the program
  - `errno` is the value given when a program returns a error code. The `man 3 errno` page says this is usually -1 or NULL

  - `rewind` sets the file position indicator to the beginning of the file.

### Questions
  1. In `Database_open`, we start with creating a pointer to `*conn` using `malloc`. However, we always reference it without the `*` - like `conn->file`. Is this using the pointer or are we passing the actual `conn` piece of memory?
