#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person *Person_create(char *name, int age, int height, int weight);
void Person_destroy(struct Person *who);
void Person_print(struct Person *who);

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
};

void Person_destroy(struct Person *who) {
  assert(who != NULL);
  free(who->name);
  free(who);
};

void Person_print(struct Person *who) {
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
};

int main(int argc, char *argv[]) {
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  printf("Joe is at the memory location %p: \n", joe);
  printf("Joe the struct is: \n");
  Person_print(joe);

  struct Person *frank = Person_create("Frankie Beans", 20, 72, 180);
  printf("Frank is at the memory location %p: \n", frank);
  printf("Frank the struct is: \n");
  Person_print(frank);
  return 0;
};
