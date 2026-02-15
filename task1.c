#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    double x, y, z;
    double sum, product, geom_mean;

    setlocale(LC_ALL, "");
    printf("Vvedit 3 diysnih chisla: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    sum = x + y + z;
    product = x * y * z;
    geom_mean = pow(fabs(x) * fabs(y) * fabs(z), 1.0 / 3.0);

    printf("Syma = %.2f\n", sum);
    printf("Dobutok = %.2f\n", product);
    printf("Seredne geometrichne modyliv = %.2f\n", geom_mean);

    return 0;
}