/* Note by g0730n: A modification I made to this code was adding:

  fflush(stdout);
  
This is not needed while running on Linux, but on Windows the
output buffered must be flushed for it to behave as it does on
Linux.
*/

#include <stdio.h>

/* copy input to output; 1st version */

int main(){
  int c;

  c = getchar();
  while (c != EOF) {
    putchar(c);
    fflush(stdout); // flush output buffer
    c = getchar();
  }
  
  return 0;
}


/* copy input to output; 2nd version */
/*
int main(){
  int c;

  while ((c = getchar()) != EOF){
    putchar(c);
    fflush(stdout); // flush output buffer
  }
  
  return 0;
}
*/