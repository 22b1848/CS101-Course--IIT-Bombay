#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,h; // Initializing the variables for side 1, side 2 and hypotenuse respectively

    for(h = 1; h <= 500; ++h){ // Running the outermost loop for hypotenuse values as it would be maximum among 3 sides, so this reduces time required to run further loops
        for(b = 1; b <= h; ++b){ // Running first inner loop for first side
            for(a = 1; a <= b; ++a){ // Running the innermost loop for third side
                if(a*a + b*b == h*h){ // Conditional to print the sides if they form a Pythagorean Triplet
                    printf("Hypotenuse = %d, Side 1 = %d, Side 2 = %d\n",h,a,b);
                }
            }
        }
    }
    return 0;
}
