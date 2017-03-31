#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_arguments(int argc, char *argv[]);
void print_letters(char word[], int size);

void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i=1; i<argc; i++) {
    char *word = argv[i];
    int size = strlen(word);
    print_letters(word, size);
  }
}

void print_letters(char word[], int size)
{
  int i = 0;
  for(i=0; i < size; i++) {
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
