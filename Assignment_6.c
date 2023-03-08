//1. Write a program to calculate sum of first N natural numbers
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