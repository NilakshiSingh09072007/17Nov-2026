#include<stdio.h>
int main()
{
int a,b;
char ch;
 printf("Enter two numbers(a and b): ");
 scanf("%d %d",&a,&b);
 printf("Enter an operator(+,*,-):");
 scanf("%c"&ch);
   switch (ch)
   {
    case '+':
    printf("sum=%d\n",a+b);
    break;
    case '*':
    printf("product=%d",a*b);
    break;

    case '-':
      if(a>b)
      {
        printf("Big=%d,Small=%d\n",a,b);
      }
      else if (b>a)
      {
        printf("Big=%d,Small=%d\n",b,a);
      }
      else {
        printf("Both numbers are equal (%d).\n",a);
      }
      break;
    default:
    printf("Invalid");
   }
   return 0;
}
