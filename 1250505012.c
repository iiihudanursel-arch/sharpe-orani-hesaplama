#include <stdio.h>

int main() {
    double getiri, risksiz, risk, sharpe;

    printf("Yatirim getirisi (%%): ");
    scanf("%lf", &getiri);
    printf("Risksiz faiz orani (%%): ");
    scanf("%lf", &risksiz);
    printf("Standart sapma (%%): ");
    scanf("%lf", &risk);

    sharpe = (getiri - risksiz) / risk;

    printf("\nSharpe Orani: %.2f\n", sharpe);

    if (sharpe < 1)
        printf("Zayif\n");
    else if (sharpe < 2)
        printf("Iyi\n");
    else if (sharpe < 3)
        printf("Cok Iyi\n");
    else
        printf("Mukemmel\n");

    return 0;
}

