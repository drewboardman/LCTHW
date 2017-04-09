#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

typedef struct person Person;
void Person_print(Person p);

struct person {
  char *name;
  int age;
  int height;
  int weight;
};

void Person_print(Person p) {
  printf("Name: %s\n", p.name);
  printf("\tAge: %d\n", p.age);
  printf("\tHeight: %d\n", p.height);
  printf("\tWeight: %d\n", p.weight);
};

int main(int argc, char *argv[]) {
  Person joe;
  joe.name = "Joey Beans";
  joe.age = 12;
  joe.height = 120;
  joe.weight = 200;
  Person_print(joe);
  return 0;
}
