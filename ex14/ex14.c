#include <stdio.h>
#include <ctype.h>

void print_arguments(int argc, char *argv[]);
void print_letters(char word[]);
int can_print_it(char letter);

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
    if(can_print_it(letter)) {
        printf("'%c' == %d\n", letter, letter);
    }
  }
}

int can_print_it(char letter)
{
  return isalpha(letter) || isblank(letter);
}

int main(int argc, char *argv[])
{
  print_arguments(argc+1, argv);
  return 0;
}
