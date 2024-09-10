#include <stdio.h>
#include <math.h>
int main() {
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    printf("x---|-1-|-2-|-3-|-4-|-5-|\n");
    printf("----|---|---|---|---|---|\n");

    float y1 = sqrt(x1), y2 = sqrt(x2), y3 = sqrt(x3), y4 = sqrt(x4), y5 = sqrt(x5);

    printf("%.2f|", y1);
    printf("%.2f|", y2);
    printf("%.2f|", y3);
    printf("%.2f|", y4);
    printf("%.2f|", y5);


    return 0;
}

