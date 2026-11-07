#include "lib.h"
#include "../build/name.c"

int main(void) {
  lib_print_hello(name_txt, name_txt_len);

  return 0;
}
