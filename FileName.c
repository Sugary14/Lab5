#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double gr;

    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    double rad = gr * M_PI / 180.0;

    printf("Угол: %.0f град. Синус: %.6f\n", gr, sin(rad));

    main1();
    main2();
    return 0;
   
}

int main1()
{
    double x;
    const double c = 0.4;
    double a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    a = log10(x);
    b = pow(a, 2) + sqrt(c * x);
    y = exp(2 * x) + 9.7 * b;

    printf("При x = %.1lf, c = %.1lf\n", x, c);
    printf("Результат y = %.5lf\n", y);

    return 0;
}

int main2()
{
    
    double x;
    const double c = 0.4;
    double a, b, y;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    a = log10(x);
    b = pow(a, 2) + sqrt(c * x);
    y = exp(2 * x) + 9.7 * b;

    printf("\n--- Результаты задания 2 ---\n");
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("y = %lf\n", y);
    printf("\n--- Результаты задания 3 ---\n");

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);

    int condition_a = ((A % 2 == 0) ^ (B % 2 == 0));
    int condition_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("Условие а) (только одно из A и B четное): %d\n", condition_a);
    printf("Условие б) (A, B, C кратны трем): %d\n", condition_b);

    return 0;
}