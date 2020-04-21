#include "unistd.h"

void display_alph(char c) {

  write(1, &c, 1);
}

int main(int ac, char **av) {
  char c='a';

  while(c<='z'){
    display_alph(c);
    c++;
  }
  return(0);
}
