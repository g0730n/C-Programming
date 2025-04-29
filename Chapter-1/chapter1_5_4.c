/* Note by g0730n:

On Windows, type in whatever you want to type, followed by Enter.
Then press "CTRL+z" to send EOF char.

On Linux, type in whatever you want to type, followed by Enter.
Then press "CTRL+d" to send EOF char.
*/

#include <stdio.h>

#define IN 1
#define OUT 0

/* count lines, words, and characters in input */

int main(){
  int c, nl, nw, nc, state;
  
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
  
  return 0;
}
