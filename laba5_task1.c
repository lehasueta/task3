#include <stdio.h>
#include <math.h>

int main() {
    double gr, rad, result;
    const double PI = 3.14159265358979323846;

    printf("Enter angle in degrees: ");
    if (scanf_s("%lf", &gr) != 1) return 1;

    rad = gr * PI / 180.0;
    result = sin(rad);

    printf("sin(%.2f) = %.6f\n", gr, result);

    return 0;
}
