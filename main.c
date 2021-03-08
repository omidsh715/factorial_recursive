#include <stdio.h>

long long int factorial(long long int i);



int  main() {
   int i,p;
   scanf("%d", &i);

   p = i;

   printf("%ld",factorial(p));
   return 0;
}


long long int factorial(long long int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}
