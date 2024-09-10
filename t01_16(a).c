#include <stdio.h>
#include <math.h>
int main() {
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    printf("x---|-1-|-2-|-3-|-4-|-5-|\n");
    printf("----|---|---|---|---|---|\n");

    float y1 = exp(-x1 * x1);
    float y2 = exp(-x2 * x2);
    float y3 = exp(-x3 * x3);
    float y4 = exp(-x4 * x4);
    float y5 = exp(-x5 * x5);

    printf("%.2f|", y1);
    printf("%.2f|", y2);
    printf("%.2f|", y3);
    printf("%.2f|", y4);
    printf("%.2f|", y5);


return 0;
}

