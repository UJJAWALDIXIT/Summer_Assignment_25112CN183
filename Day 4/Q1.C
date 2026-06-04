#include<stdio.h>

int main(){
    int x, y, n, z;
    printf("Enter a number: ");
    scanf("%d", &n);

    x = 0;
    y = 1;

    while(x <= n) {
        printf("%d\n", x);   // print current Fibonacci number

        z = x + y;  // next term
        x = y;      // shift
        y = z;      // shift
    }

    return 0;
}
