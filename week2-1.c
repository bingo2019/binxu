#include <stdio.h>

int main(int argc, char *argv[])
{
    int C, x, y;
    float D;
    printf("test 2-1-1 \n");
    C = 5 * (100 - 32) / 9;
    printf("fahr = 100, celsius = %d\n", C);

    printf("\ntest 2-1-2 \n");
    C = 5 * (150 - 32) / 9;
    printf("fahr = 100, celsius = %d\n", C);

    printf("\ntest 2-1-3 \n");

    D = (10 * 3 * 3) / 2.0;
    printf("height = %.2f\n", D);

    printf("\ntest 2-1-4 \n");
    C = (87 + 72 + 93) / 3;
    printf("math = 87, eng = 72, comp = 93, average = %d\n", C);
    
    printf("\ntest 2-1-5 \n");
    x = 3; y = x * x;
    printf("%d = %d * %d\n", y, x, x);
    printf("%d * %d = %d\n", x, x, y);    

    printf("\ntest 2-1-6 \n");
    C = 9 * 26 / 5 + 32;
    printf("celsius = 26, fahr = %d\n", C);

    printf("\ntest 2-1-7 \n");
    x = 152;
    printf("152 = %d + %d*10 + %d*100\n", x%10, (x/10)%10, x/100);


    return 0;
}