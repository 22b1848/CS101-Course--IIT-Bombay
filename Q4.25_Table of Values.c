#include<stdio.h>
#include<math.h>


int main()
{
    unsigned int binary(unsigned int x){
        int i = 0;
        unsigned int bin = 0;
        while(x > 0){
            unsigned int y = x%2;
            int counter = i;
            while(counter > 0){
                y = y*10;
                counter--;
            }
            i++;
            bin += y;
            x = x/2;
        }
        return bin;
    }

    for(unsigned int num = 1; num <= 256; ++num){
        unsigned int bin = binary(num);
        printf("\nBinary form = %u\nOctal form = %o\nHexadecimal form = %X\n",bin,num,num);
    }
    return 0;
}
