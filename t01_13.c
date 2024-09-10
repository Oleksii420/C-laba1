#include <stdio.h>
#include <math.h>

int main() {

    double x;
    scanf("%lf",&x);
    double result = log10(x);
    printf("%.3f",result);

    return 0;

}