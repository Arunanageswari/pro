#include <stdio.h>
 int main()
{
   int n, t, sum = 0, remainder,original,rem,rev;
   printf("Enter an integer\n");
   scanf("%d", &n);
 t = n;
  while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
 
   printf("Sum of digits of %d = %d\n", n, sum);
    original = sum;
    while( sum!=0 )
    {
        rem = sum%10;
        rev= rev*10 + rem;
        n /= 10;
    }
    if(original == rev)
        printf("%d is a palindrome.");
    else
        printf("%d is not a palindrome.");
    
    return 0;
}
   
