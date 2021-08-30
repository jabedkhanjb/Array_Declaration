#include<stdio.h>
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int array2[10];
    int i,j;

    for(i=0, j=9; i<10; i++, j--)
    {
        array2[j] = array[i];
    }
    for(i=0; i<10; i++)
    {
        array[i] = array2[i];
    }
    for(i=0; i<10; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
