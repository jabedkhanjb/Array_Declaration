#include<stdio.h>
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int array2[15];
    int i,j;
    for(i=0, j=14; i<15; i++,j--)
    {
        array2[j] =array[i];
    }
    for(i=0; i<15; i++)
    {
        array[i] = array2[i];
    }
    for(i=0; i<15; i++)
    {
        printf("%d\n",array[i]);

    }
    return 0;
}
