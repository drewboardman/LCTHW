#include <stdio.h>

int main(int argc, char *argv[])
{
  int ages[] = { 15, 31, 29, 65 };
  char *names[] = { "Drew", "Alex", "Gail", "Geoff" };

  printf("--Part 1--\n");
  // safely get the # of items in ages
  int size_of_ages = sizeof(ages)/sizeof(int);

  int i = 0;
  for(i=0; i<size_of_ages; i++) {
    char *this_name = names[i];
    int this_age = ages[i];

    printf("%s has %d years to live\n", this_name, this_age);
  };
  printf("--Part 2--\n");

  //this points to the beginning of the pointers
  int *start_of_ages = ages;
  char **start_of_names = names;

  for(i=0; i<size_of_ages; i++)
  {
    char *name_plus_i = *(start_of_names + i);
    int age_plus_i = *(start_of_ages + i);
    printf("%s is %d years old\n", name_plus_i, age_plus_i);
  }

  printf("--Part 3--\n");
  // you can just index them instead of adding i explicitly

  for(i=0; i<size_of_ages; i++)
  {
    char *name_index = names[i + 15];
    int age_index = ages[i];
    printf("%s is %d years old, again\n", name_index, age_index);
  }
  printf("--Part 4--\n");
  return 0;
}
