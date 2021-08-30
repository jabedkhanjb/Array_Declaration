#include<stdio.h>
int main()
{
    int array[5] = {10, 20, 50, 40, 60};

    printf("First Element : %d\n",array[0]);
    printf("Last Element : %d\n",array[4]);

    printf("\nAnother Array Experiment.\n");

    int array2[10] = {10, 50, 30, 40, 90, 56, 75, 48, 23, 19};
    int i;
    for(i=0; i<9; i++);
    {
        printf("%d th Element is : %d\n",i+1,array2[i]);
    }
    return 0;
}
