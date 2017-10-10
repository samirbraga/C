#include <stdio.h>

void main (void) {
  int a[]    = {8, 2, 4, 3, 4, 2, 5, 1},
      b[]    = {3, 3, 7, 5, 2, 3, 3, 7},
      result[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
      
  int carry = 0;
  int num = 0;
  for (int i = 9; i > 0; i--) { 
    num = a[i-1] + b[i-1] + carry;
    result[i] = num % 10;
    carry = (num/10) | 0;
  }

  result[0] = carry;

  for (int i = 0; i < 9; i++) {  
    printf ("%d ", result[i]);
  }
}
