#include "unistd.h"

void yalpisd_alph(char c) {

  write(1, &c, 1);
}

int main(int ac, char **av){
  char c='z';

  while(c>='a'){
    yalpisd_alph(c);
    c--;
  }
  return(0);
}
