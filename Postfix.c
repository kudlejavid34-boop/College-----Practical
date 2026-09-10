#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char post[20];
 int stack[20], top = -1;
 int i, a, b, result;
 printf("Enter Postfix Expression: ");
 scanf("%s", post);
 for(i = 0; post[i] != '\0'; i++)
 {
 if(post[i] >= '0' && post[i] <= '9')
 {
 stack[++top] = post[i] - '0';
 }
 else
 {
 b = stack[top--];
 a = stack[top--];
 switch(post[i])
 {
 case '+':
 result = a + b;
 break;
 case '-':
 result = a - b;
 break;
 case '*':
 result = a * b;
 break;
 case '/':
 result = a / b;
 break;
 }
 stack[++top] = result;
 }
 }
 printf("\nResult = %d", stack[top]);
 return 0;
}
