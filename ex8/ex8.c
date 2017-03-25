#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if(argc == 1) {
    printf("You have %d argument.\n", argc);
  } else if(argc > 1 && argc < 4) {
    printf("You have %d arguments, and they are:\n", argc);

    for(i = 0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
  } else {
    printf("You have more arguments than conditions.\n");
  };

  return 0;
}
