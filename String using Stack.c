#include<stdio.h>
#include<conio.h>
#include<string.h>
char stack[50];
int top = -1;
int push(char ch)
{
 top++;
 stack[top] = ch;
}
char pop()
{
 return stack[top--];
}
 int main()
{
 char str[50], ch;
 int i, count = 0;
 printf("Enter a string: ");
 gets(str);
 /* Push all characters into stack */
 for(i=0; str[i]!='\0'; i++)
 {
 push(str[i]);
 }
 /* Pop characters and count vowels */
 while(top != -1)
 {
 ch = pop();
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
    ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
 {
 count++;
 }
 }
 printf("\nTotal Vowels = %d", count);
 return 0;
}
}