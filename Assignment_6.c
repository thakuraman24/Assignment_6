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

    return 0;

}

2. Write a program to calculate sum of first N even natural numbers

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

    return 0;

}

3. Write a program to calculate sum of first N odd natural numbers


#include<stdio.h>

int main(){

    printf("Sum of how many odd natural numbers do you want ?\n");

    int count=0,sum=0,j=0;
    scanf("%d",& count);

    for (int i = 1; j!=5 ; i++)
    {
        if (i&2!=0)
        {
           j++;
           sum=sum+i;
           printf(" j%d",j);
           printf("sum%d ",sum);
        }
        
    }

    printf("The sum of first %d odd natural no is %d\n",count,sum);

    return 0;

}

4. Write a program to calculate sum of squares of first N natural numbers


#include<stdio.h>

int main(){

    printf("Sum of squares how many first natural numbers do you want ?\n");

    int count=0,sum=0;
    scanf("%d",& count);

    for (int i = 1; i<=count ; i++)
    {
        sum=sum+(i*i);

    }

    printf("The sum of squares first %d natural no is %d\n",count,sum);

    return 0;

}

5. Write a program to calculate sum of cubes of first N natural numbers


#include<stdio.h>

int main(){

    printf("Sum of cubes how many first natural numbers do you want ?\n");

    int count=0,sum=0;
    scanf("%d",& count);

    for (int i = 1; i<=count ; i++)
    {
        sum=sum+(i*i*i);

    }

    printf("The sum of cubes first %d natural no is %d\n",count,sum);

    return 0;

}

6. Write a program to calculate factorial of a number

#include<stdio.h>

int main(){
    printf("Factorial of which no do you want to calculate ?\n");
    int n,fac=1;
    scanf("%d",& n);

    for (int i = n; i >= 1; i--)
    {
        fac=fac*i;
        printf("i%d",i);
        printf("fac%d \n",fac);
    }

    printf("Factorial of %d is %d\n",n,fac);
    
    return 0;
}

7. Write a program to count digits in a given number


#include<stdio.h>

int main(){

    printf("Enter the no whose no of digits you want find\n");

    int n,com=10,count=0;
    scanf("%d",& n);

    for (int flag=0; flag!=1 ; com=com*10 )
    {
        if(n<com)
            flag=1;      
        count++;       
    }

    printf(" %d has %d digits\n",n,count);

    return 0;

}

8. Write a program to check whether a given number is a Prime number or not
*/














































