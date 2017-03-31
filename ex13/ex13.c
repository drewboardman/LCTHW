#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  for(i=0; i < argc; i++) {
    printf("argc: %d. argv: %s\n",
        i, argv[i]);
  };

  char *states[] = {
    "California",
    "Maine",
    "Utah",
    "Georgia"
  };

  int num_states = 4;

  for(i=0; i < num_states; i++) {
    states[i] = argv[i];
    printf("state#%d: %s\n",
        i, states[i]);
  };
  return 0;
}
