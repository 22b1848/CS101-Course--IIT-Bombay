#include <stdio.h>

void roman(int x)
{
    while(x>0){
        if (x == 100){
            printf("C");
            x = 0;
        }
        else if (x>=90){
            printf("XC");
            x -= 90;
        }
        else if (x>=80){
            printf("LXXX");
            x -= 80;
        }
        else if (x>=70){
            printf("LXX");
            x -= 70;
        }
        else if (x>=60){
            printf("LX");
            x -= 60;
        }
        else if (x>=50){
            printf("L");
            x -= 50;
        }
        else if (x >= 40){
            printf("XL");
            x -= 40;
        }
        else if (x >= 30){
            printf("XXX");
            x -= 30;
        }
        else if (x >= 20){
            printf("XX");
            x -= 20;
        }
        else if (x >= 10){
            printf("X");
            x -= 10;
        }
        else if (x >= 9){
            printf("IX");
            x -= 9;
        }
        else if (x >= 8){
            printf("VIII");
            x -= 8;
        }
        else if (x >= 7){
            printf("VII");
            x -= 7;
        }
        else if (x >= 6){
            printf("VI");
            x -= 6;
        }
        else if (x >= 5){
            printf("V");
            x -= 5;
        }
        else if (x >= 4){
            printf("IV");
            x -= 4;
        }
        else if (x >= 3){
            printf("III");
            x -= 3;
        }
        else if (x >= 2){
            printf("II");
            x -= 2;
        }
        else if (x >= 1){
            printf("I");
            x -= 1;
        }
    }
}

int main()
{
    for (int i = 1; i <= 100; ++i){
        roman(i);
        printf("\n");
    }
    return 0;
}
