#include "unistd.h"

void display_char(char c) {
  // print c
  write(1, &c, 1);
}

int main(int ac, char **av) {
  char c = 'a';

  display_char(c);

  return (0);
}
