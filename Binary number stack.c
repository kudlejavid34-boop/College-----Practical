#include<stdio.h>
#include<conio.h>
int main()
{
 int num, stack[20], top = -1, rem;
 printf("Enter a decimal number: ");
 scanf("%d", &num);
 /* Push remainder into stack */
 while(num > 0)
 {
 rem = num % 2;
 stack[++top] = rem;
 num = num / 2;
 }
 /* Pop and display binary number */
 printf("Binary number is: ");
 while(top != -1)
 {
 printf("%d", stack[top--]);
 }
 return 0;
}