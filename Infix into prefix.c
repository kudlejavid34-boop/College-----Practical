#include <stdio.h>
#include <conio.h>
int main()
{
    char ch, op;
    printf("Enter variable:");
    scanf("%c", &ch);
    printf("Enter operator(+ or -:");
    scanf(" %c", &op);
    if (op == '+')
    printf("\nPostfix: %c++", ch);
    else
    printf("\nPostfix: %c--", ch);
    if (op== '+')
    printf("/nPostfix: ++%c", ch);
    else
    printf("\nPostfix: --%c", ch);
    return 0;
}