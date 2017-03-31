#include <stdio.h>
#include <ctype.h>

void print_arguments(int argc, char *argv[]);
void print_letters(char word[]);

void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i=1; i<argc; i++) {
    print_letters(argv[i]);
  }
}

void print_letters(char word[])
{
  int i = 0;
  for(i=0; word[i] != '\0'; i++) {
    char letter = word[i];
    int can_print =  isalpha(letter) || isblank(letter);
    if(can_print) {
        printf("'%c' == %d\n", letter, letter);
    }
  }
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}
