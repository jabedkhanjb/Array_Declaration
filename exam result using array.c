#include<stdio.h>
int main()
{
    /*
    ft for first term
    st for second term
    and final_term
    */
    int ft, st, final_term;
    double total_marks;
    printf("Enter your First term marks : ");
    scanf("%d",&ft);
    printf("\nEnter your Second term marks : ");
    scanf("%d",&st);
    printf("\nEnter your Final term marks : ");
    scanf("%d",&final_term);
    /*
    mark are counting as 25% of first and second term
    and 50% of final term for 100 marks
    */
    total_marks = ft / 4 + st / 4 + final_term / 2 ;
    printf("\n\nHere is your total marks : %.2lf",total_marks);
    printf("\n");
    return 0;
}
