#include <stdio.h>
#include <math.h>

int main() {
    double x, t = 0.3, a, b, y;
    int A, B, C, cond1, cond2;

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

    A = (int)a;
    B = (int)b;
    C = (int)y;

    cond1 = (A % 2 == 0) != (B % 2 == 0);
    cond2 = (A % 3 == 0) &&
        (B % 3 == 0) &&
        (C % 3 == 0);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("Condition A: %d\n", cond1);
    printf("Condition B: %d\n", cond2);

    return 0;
}
