#include <stdio.h>

int main()
{
  int my_num = 1;
  int *my_num_ptr = &my_num;

  printf("the ptr is %d\nthe value is %d\n", *my_num_ptr, my_num_ptr);
  return 0;
}
