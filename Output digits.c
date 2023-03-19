 #include<stdio.h>

 int main()
 {
     int num;
     printf("Enter a number whose digits are to be separated: ");
     scanf("%d", &num);
     int b,revnum;
     revnum = 0;
     do{
        revnum = revnum*10 + num%10;
        num = (int)(num/10);
     } while (num>0);
     do{
        b = revnum%10;
        printf("%d ", b);
        revnum = (int)(revnum/10);
     } while(revnum>0);
     return 0;
 }
