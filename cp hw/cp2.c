// without recursion 

#include <stdio.h>

int fact(int n) {
  int i;
  int fact = 1;
  for (i = 1; i <= n; i++) {
    fact = fact * i;
  }
  return fact;
}

int main() {
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

 if (n < 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
}

  printf("Factorial of %d is %d\n", n, fact(n));

  return 0;
}