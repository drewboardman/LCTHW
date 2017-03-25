#include <stdio.h>

int main(int argc, char *argv[])
{
  char drew[] = "drew";
  drew[4] = 'A';
  printf("%s", drew);

  return 0;
}
