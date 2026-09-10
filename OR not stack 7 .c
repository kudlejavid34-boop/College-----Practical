#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[20], stack[20];

    int i, top = -1, len;
    char ch;
    printf("Enter string:");
    scanf("%s", str);
    len = strlen(str);
    /* Push characters into stack */
    for(i=0; i<len; i++)
    {
        stack[++top] = str[i];
    }
    /* Compare by popping from stack */
    for(i=0; i<len; i++)
    {
        ch = stack[top--];
        if(ch != str[i])
        {
            printf("String is not a palindrome");
            return 0;
        }
    }
    printf("String is a palindrome");
    return 0;
}