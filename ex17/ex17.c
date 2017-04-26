#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//constants use the shebang thing too
#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
  int id;
  int set;
  char name[MAX_DATA];
  char email[MAX_DATA];
};

struct Database {
  // So this is like char *name[]
  // You're creating an array called "rows" that has MAX_ROWS number of struct Addresses in it
  struct Address rows[MAX_ROWS];
};

struct Connection {
  FILE *file;
  struct Database *db;
};

void die(const char *message) {
};

void Address_print(struct Address *addr) {
  printf("%d %s %s", addr->id, addr->name, addr->email);
};

void Database_load(struct Connection *conn) {
  int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
  if(rc != 1) {
    die("Failed to load database!");
  };
};

int main(int argc, char *argv[]){};
