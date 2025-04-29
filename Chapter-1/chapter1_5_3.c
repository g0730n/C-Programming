/* Note by g0730n:

On Windows, type in whatever you want to type, followed by Enter.
Then press "CTRL+z" to send EOF char.

On Linux, type in whatever you want to type, followed by Enter.
Then press "CTRL+d" to send EOF char.
*/

#include <stdio.h>

/* count lines in input */

int main(){
  int c, nl;
  
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
  
  return 0;
}
