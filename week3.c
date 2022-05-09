#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    // printf("*** test 3-1 ***\n");   
    // printf("求一无二次方程ax^2+bx+c=0的根\n");
    // float a, b, c;
    // scanf("%f %f %f", &a, &b, &c);
    // float m, x1, x2;
    // m = b * b - 4 * a * c;
    // if(a==0)
    // {
    //     if(b==0)
    //     {
    //         if(c==0)
    //         {
    //             printf("Zero Equation\n");
    //         }
    //         else
    //         {
    //             printf("Not An Equation\n");
    //         }  
    //     }  
    //     else
    //     {
    //         printf("%.2f\n", -c/b);
    //     }
    // }
    // else if(m > 0)
    // {
    //     x1 = -b / (2 * a);
    //     x2 = sqrt(m) / (2 * a);
    //     printf("%.2f\n%.2f\n", x1 + x2, x1 - x2);
    // }
    // else if(m == 0)
    // {
    //     printf("%.2f\n", -b/(2*a));
    // }
    // else
    // {
    //     x1 = -b/2*a;
    //     x2 = (sqrt(-m)/(2*a));
    //     printf("%.2f + %.2fi\n", x1, x2);
    //     printf("%.2f - %.2fi\n", x1, x2);
    // }

    // printf("*** test 3-2 ***\n");   
    // printf("符号函数sign(n)的实现\n");
    // int res, n;
    // scanf("%d", &n);

    // if(n > 0)
    // {
    //     res = 1;
    // }
    // else if(n ==0)
    // {
    //     res = 0;
    // }
    // else
    // {
    //     res = -1;
    // }
    // printf("sign(%d) = %d\n", n, res);

    // printf("*** test 3-3 ***\n");   
    // printf("将输入的任意3个整数从小到大输出\n");   
    // int d1, d2, d3;
    // scanf("%d %d %d", &d1, &d2, &d3);
    // int tmp;
    // if(d1 > d2)
    // {
    //     tmp = d1;
    //     d1 = d2;
    //     d2 = tmp;
    // }
    // if(d2 > d3)
    // {
    //     tmp = d2;
    //     d2 = d3;
    //     d3 = tmp;
    // }
    // if(d1 > d2)
    // {
    //     tmp = d1;
    //     d1 = d2;
    //     d2 = tmp;
    // }
    // printf("%d->%d->%d\n", d1, d2, d3);

    // printf("*** test 3-4 ***\n");   
    // printf("输入10个字符，统计字母、数字、空格的数量\n");       
    // int letter, blank, digit, other;
    // int ch;
    // int count=0;
    // letter = 0;
    // blank = 0;
    // digit = 0;
    // other = 0;

    // while(1)
    // {
    //     ch = getchar();

    //     if(isdigit(ch))         //数字
    //     {
    //         digit++;
    //     }
    //     else if(isspace(ch))    //空格或回车
    //     {
    //         blank++;
    //     }
    //     else if(isalpha(ch))    //字母
    //     {
    //         letter++;
    //     }
    //     else
    //     {
    //         other++;
    //     }
    //
    //     if((++count == 10))
    //         break;
    // }
    //
    // if(count != 10)
    // {
    //     printf("error: 请输入10个字符。\n");
    // }
    // else
    // {
    //     printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    // }

    // printf("*** test 3-5 ***\n");   
    // printf("查询水果价格\n");    
    // printf("[1] apple\n");
    // printf("[2] pear\n");
    // printf("[3] orange\n");
    // printf("[4] grape\n");
    // printf("[0] exit\n");    
    
    // float price[4] = {3.00, 2.50, 4.10, 10.20};
    // int count = 0;
    // int ch;

    // while(1)
    // {
    //     ch = getchar();
    //     if(isdigit(ch))
    //     {
    //         if(count >= 5)
    //             break;
    //         count++;
    //         ch -= 0x30;
    //         printf("price = %.2f\n", price[ch - 1]);
    //     }
    // }

    // printf("*** test 3-6 ***\n");   
    // printf("计算个人所得税\n");    
    // float salary;
    // float incomeTax;
    // float rate;

    // scanf("%f", &salary);
    // if(salary <=1600)
    // {
    //     rate = 0;
    //     //incomeTax = rate * salary;
    // }
    // else if(salary <= 2500)
    // {
    //     rate = 0.05;
    //     //incomeTax = rate * (salary - 1600);
    // }
    // else if(salary <=3500)
    // {
    //     rate = 0.1;
    //     //incomeTax = rate * (salary - 2500);// + 45;//(2500-1600) * 0.05;
    // }
    // else if(salary <=4500)
    // {
    //     rate = 0.15;
    //     //incomeTax = rate * (salary - 3500);// + 100 + 45;//(3500 -2500)*0.1 + (2500-1600)*0.05;
    // }
    // else
    // {
    //     rate = 0.2;
    //     //incomeTax = rate * (salary - 1600);// + 150 + 100 + 45;//(3500 -2500)*0.1 + (2500-1600)*0.05;
    // }
    // incomeTax = rate * (salary - 1600);
    // printf("%.2f\n", incomeTax);

    // int i, num, score;
    // int A=0, B=0, C=0, D=0, E=0;    
    // printf("*** test 3-7 ***\n");   
    // printf("统计学生成绩\n");     

    // scanf("%d", &num);

    // for(i=0; i<num; i++)
    // {
    //     scanf("%d", &score);
    //     if(score < 60)
    //     {
    //         E++;
    //     }
    //     else if(score < 70)
    //     {
    //         D++;
    //     }
    //     else if(score < 80)
    //     {
    //         C++;
    //     }
    //     else if(score < 90)
    //     {
    //         B++;
    //     }
    //     else{
    //         A++;
    //     }
    // } 

    // printf("%d %d %d %d %d\n", A, B, C, D, E);


    printf("*** test 3-8 ***\n"); 
    printf("输出三角形面积和周长\n"); 
    int a, b, c;
    float area, perimeter;   
    float s;

    scanf("%d %d %d", &a, &b, &c);
    
    s = (a + b +c)/2;
    area = s * (s - a) * (s - b) * (s - c);
    if (area <= 0)
    {
        printf("These sides do not correspond to a valid triangle\n");
    }
    else
    {
        perimeter = a + b + c;
        area = sqrt(area);
        printf("area = %.2f; perimeter = %.2f\n", area, perimeter);
    }
    
    return 0;
}