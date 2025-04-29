/* Note by g0730n:

On Windows, type in whatever you want to type, followed by Enter.
Then press "CTRL+z" to send EOF char.

On Linux, type in whatever you want to type, followed by Enter.
Then press "CTRL+d" to send EOF char.
*/

#include <stdio.h>

/* count characters in input; 1st version */

/*
int main(){
  
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
  
  return 0;
}
*/

/* count characters in input; 2nd version */

int main(){
  
  double nc;

  for(nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
  
  return 0;
}
