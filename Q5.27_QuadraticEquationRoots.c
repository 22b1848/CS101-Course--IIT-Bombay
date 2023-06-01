#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double roots(double a,double b,double c)
{
    double d = b*b - 4*a*c;
    printf("Determinant = %.0lf\n",d);

    if (d < 0){
        printf("The roots are complex and distinct.");
        return -100,-100;
    }
    else if (d == 0){
        printf("The roots are real and equal.");
        double root1 = -b/(2*a);
        double root2 = -b/(2*a);
        return root1,root2;
    }
    else{
        printf("The roots are real and distinct.");
        double root1 = (-b+sqrt(d))/(2*a);
        double root2 = (-b-sqrt(d))/(2*a);
        return root1,root2;
    }
}

int main()
{
    double a,b,c;
    printf("Enter the 3 coefficients of the Quadratic Equation (separated by a space): ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("The Equation is: (%.2lf)x*x + (%.2lf)x + (%.2lf) = 0\n",a,b,c);
    double root1,root2 = roots(a,b,c);
    if (root1 != -100 || root2 != -100){
        printf("\n%.2lf\n%.2lf",root1,root2);
    }
}
