#include "unistd.h"

void display_digit(int c){

  write(1, &c, 1);
}

int main(int ac){
  int c='1';

  while(c<=9){
    display_digit(c);
    c++;
  }
  return(0);
}
