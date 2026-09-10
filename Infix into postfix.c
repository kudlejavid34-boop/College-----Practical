#include <stdio.h>
int main()
{
    char ch, op;
    printf("Enter variable:");
    scanf("%c", &ch);
    printf("Enter operator(+ for -):");
    scanf(" %c", &op);
    if (op == '+')
    printf("\nInfix Expression = %c++", ch);
    else
    printf("\nInfix Expression = %c--", ch);
     if(op== '+')
     printf("\nInfix Expression =%c++", ch);
     else
     printf("\nInfix Expression =%c", ch);
     return 0;

}