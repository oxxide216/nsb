#include <stdio.h>

#include "lib.h"

void lib_print_hello(const char *name, int name_len) {
  printf("Hello, %.*s!\n", name_len, name);
}
