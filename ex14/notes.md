### Forward Declarations

  - *forward declarations* are basically abstract functions that are declared at
    the top of a file
    - you only need to *FD* a function if it will be referenced within the scope
      of another function
  - When you don't need *FD*: If all your functions are declared in the order in which they are called,
    with not dependant function calls withing them that aren't also defined
before their usage.
    - AKA all the functions are in order
  - *header files* are basically full of just forward declarations

#### Debugging issues
  1. `lldb ./ex14`
  2. In the video his lldb stops without him having to `b main` or anything
  3. backtrace through using `thread backtrace`
