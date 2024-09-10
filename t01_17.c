#include <math.h>
#include <stdio.h>

int main() {

    double n, res;
    scanf("%lf", &n);

    res = pow(n, 8);

    printf("%20.4lf\n", res);

    return 0;
}