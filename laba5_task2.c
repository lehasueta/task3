#include <stdio.h>
#include <math.h>

int main() {
    double x, t = 0.3, a, b, y;

    printf("Enter x: ");
    scanf_s("%lf", &x);

    if (x <= 0) {
        printf("Error");
        return 1;
    }

    a = log10(fabs(t * x + t * t));
    b = x * t * t + sqrt(x);

    if (fabs(a) < 1e-12 || a + b <= 0) {
        printf("Invalid logarithm");
        return 1;
    }

    y = log(a * a / (a + b));

    printf("x = %.2f\n", x);
    printf("a = %.4f\n", a);
    printf("b = %.4f\n", b);
    printf("y = %.4f\n", y);

    return 0;
}
