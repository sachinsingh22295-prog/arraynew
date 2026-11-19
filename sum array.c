#include<stdio.h>
int main()
{
    int array[7];
    int i;
    int sum = 0;
    printf("enter 7 elements:\n");
    for(i=0; i < 7; i++)
    {
        sacnf("%d",&array[i]);
    }
    for(i=0; i<7; i++)
    {
        sum += arr[i];
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}