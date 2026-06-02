#include<stdio.h>

int main()
{
    int a, r, sum = 0;

    printf("enter a number: ");
    scanf("%d", &a);

    while(a > 0){
        r = a % 10;    
        sum = sum + r; 
        a = a / 10;    
    }

    printf("Sum = %d\n", sum);

    return 0;
}
