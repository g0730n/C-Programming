# C Programming

## Programs for lessons from book "The C Programming Language" Second Edition, by Brian W. Kernighan and Dennis M. Ritchie

I have decided to work through this book, and decided that I'd create a repository for all lesson code examples.
I imagine someone has already done this exact thing, but this is mainly for my education and I imagine others might find
the code interesting and educational. All of this is done for educational and entertainment purposes only, and as I am typing all code examples with my own
two hands, I therefore consider this my creation and not a copyright infringement.

New lesson code will be added as I progress through the book.

## Completed Lessons:
- [ ] Chapter 1
- [ ] Chapter 2
- [ ] Chapter 3
- [ ] Chapter 4
- [ ] Chapter 5
- [ ] Chapter 6
- [ ] Chapter 7
- [ ] Chapter 8

I am using gcc version 13.2.0, and notepad++ for this project. The only changes I have made to original lesson code so far is to avoid compiler warnings, eg. :

### Original:
```
main(){
  //some code here
}
```
Delivers compliler warning: `return type defaults to 'int' [-Wimplicit-int]`

### Updated:
```
int main(){
  //some code here
  return 0;
}
```

I will document any such changes made because of compiler warnings, I imagine a few might pop up as these lessons were written a long time ago.
