#include <stdio.h>

int main(int argc, char *argv[])
{

  if(argc != 2) {
    printf("please supply one argument only. k thnx.");

    return 1; // this is how you exit
  };

  int i = 0;
  for(i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];

    switch(letter) {
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;

      case 'e':
      case 'E':
        printf("%d: 'E'\n", i);
        break;

      case 'i':
      case 'I':
        printf("%d: 'I'\n", i);
        break;

      case 'o':
      case 'O':
        printf("%d: 'O'\n", i);
        break;

      case 'u':
      case 'U':
        printf("%d: 'U'\n", i);
        break;

      case 'y':
      case 'Y':
        if (i > 2) {
          printf("And sometimes 'Y'\n");
        };
        break;

      default:
        printf("%d is not a vowel.\n", letter);
    };
  };
  return 0;
}
