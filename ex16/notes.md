Structs and Pointers to Them
---------------------------

  - The `->` de-references the struct
  - `struct`s really just tell the compiler to allocation a chunk of RAM, and
    then segment that chunk into references of different names and types

  - From the `man 3` entry:

```c
void *
malloc(size_t size);
The malloc() function allocates size bytes of memory and returns a pointer to the allocated memory
```

  - you need to use the `->` *struct dereference* when it **is a pointer** and
    the `structInstance.property` when it's not a pointer

These are the same:
```c
struct Person *who = malloc(sizeof(struct Person));
char *name = "Drew";
who->name = strdup(name);
(*who).name = strdup(name);
```

When he uses `Person_print` he has `printf(\t)`. The `man` page says:

```
Note: the t modifier, when applied to a o, u, x, or X conversion, indicates that
the argument is of an unsigned type equivalent in size to a ptrdiff_t.  The z
modifier, when
         applied to a d or i conversion, indicates that the argument is of a
signed type equivalent in size to a size_t.  Similarly, when applied to an n
conversion, it indicates that
         the argument is a pointer to a signed type equivalent in size to a
size_t.
```
