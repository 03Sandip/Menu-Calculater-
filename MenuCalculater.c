#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, choice, c;
    double d, e, result;
    
    while (1)
    {
        printf("You can do the following options\n");
        printf("1.Additional\n");
        printf("2.Substraction\n");
        printf("3.Multuplition\n");
        printf("4.Divition\n");
        printf("5.squar root\n");
        printf("6.power\n");
        printf("\n\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                c = a + b;
                printf("Sum is %d\n", c);
                break;
            
            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                c = a - b;
                printf("Difference is %d\n", c);
                break;
            
            case 3:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                c = a * b;
                printf("Product is %d\n", c);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d,%d", &a, &b);
                c = a / b;
                printf("Quotient is %d\n", c);
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%lf", &d);
                e = sqrt(d);
                printf("Square root is %lf\n", e);
                break;
                
            case 6:
                printf("Enter two numbers: ");
                scanf("%lf%lf", &d, &e);
                result = pow(d, e);
                printf("Power is %lf\n", result);
                break;
            
            default:
                return 0;
        }
    }
}
