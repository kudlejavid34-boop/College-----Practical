#include <stdio.h>
int main()
{
    int a [5] = {40,10,30,20,50};
    int i, j, min, temp;
    for(i= 0; i < 4; i++)
    {
        min = i;
        for(j = i + 1; j < 5; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted array:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    return 0;
}
