/*1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>

int main(){
    printf("How many natural numbers do you want to print\n");
    int count;
    scanf("%d",& count);
    for (int i = 1; i < count+1; i++)
    {
        printf("%d\n",i);
    }
    
}

2. Write a program to calculate sum of first N even natural numbers
*/
#include<stdio.h>

int main(){

    printf("Sum of how many natural numbers do you want ?\n");

    int count=0,sum=0;
    scanf("%d",& count);

    for (int i = 1; i < count+1; i++)
    {
        sum=sum+i;
    }

    printf("\nThe sum of first %d natural no is %d",count,sum);

}












