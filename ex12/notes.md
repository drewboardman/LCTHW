  - when you use `sizeof` of a `*string[]` created array, it will give you the
    size of the *pointer*.
  - only when it's the real reference to the array will `sizeof` give you the
    correct thing

  - Again, C counts strings and byte arrays as the same thing.

  - When you initialize an array, with no size, but give values - C will
    allocate a space in memory for an array with that size (number of values in
the initialization)
