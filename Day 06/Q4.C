#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    double result;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    result = pow(x, n);

    printf("%d ^ %d = %.0lf", x, n, result);

    return 0;
}