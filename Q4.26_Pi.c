#include<stdio.h>
#include<math.h>

int main()
{
    double pi = 0;
    double i = 1;
    for (unsigned int counter = 1; counter <= 100000; ++counter){
        if (counter % 2 == 1){
            pi += 4/i;
        }
        else {
            pi -= 4/i;
        }
        i += 2;
        if (pi > 3.14000 && pi < 3.14999){
            printf("Number of Terms to get 3.14 = %u\n",counter);
            break;
        }
    }
    printf("Current value of Pi = %lf\n",pi);
    return 0;
}
