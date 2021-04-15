#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x1,x2,px,a,b,c,e;
    float x,F;
    int n;

    printf("Input x1 : ");
    scanf("%f", &x1);
    printf("Input x2 : ");
    scanf("%f", &x2);
    printf("Input px : ");
    scanf("%f", &px);
    printf("Input a : ");
    scanf("%f", &a);
    printf("Input b : ");
    scanf("%f", &b);
    printf("Input c : ");
    scanf("%f", &c);
    printf("Input e : ");
    scanf("%f", &e);
    x= x1;
    n= 0;
    printf("\n\t Results : \n");
    while (x < x2)
    {
        n =n + 1;
        if((x < b) || (c != 0))
        {
            F = ((c*log(a*x)) - (x*x)/(a + c));
        }
        else if ((x > b) && (c == 0))
        {
            F = (x - log(x*x)) / (b - pow(cos(a*c),2));
        }
        else
        {
            F = (a + x)/(c*c) + pow(e,3*x);
        }
        printf("%d: x = %.3f \t F = %.3f \n", n,x,F);
        x = x + px;
    }
    getch();
    return 0;
}

