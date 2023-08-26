#include <stdio.h>
void main() {
  int n, d, rev = 0;
  printf("enter a number : ");
  scanf("%d", &n);
  d = n;
  while (n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }
  printf("number %s palindrome\n", rev == d ? "is" : "is not");
}
