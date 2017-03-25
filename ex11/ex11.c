#include <stdio.h>

int main(int argc, char *argv[])
{
  int number[4] = { 0 };
  /* char name[4] = { 'a' }; */
  char *name = "Zed";

  printf("numbers: %d%d%d%d.\n", 
      number[0], number[1], number[2], number[3]);
  printf("name: %c%c%c%c.\n", 
      name[0], name[1], name[2], name[3]);
  printf("%s\n", name);

  number[0] = 1;
  number[1] = 2;
  number[2] = 3;
  number[3] = 4;

  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  printf("numbers: %d%d%d%d.\n", 
      number[0], number[1], number[2], number[3]);
  printf("name: %c%c%c%c.\n", 
      name[0], name[1], name[2], name[3]);
  printf("%s\n", name);

  // another way to write a string
  char *another = "Zed";
  printf("another: %s\n", another);
  printf("long way of another: %c%c%c%c.\n",
      another[0], another[1], another[2], another[3]);

  return 0;
}
