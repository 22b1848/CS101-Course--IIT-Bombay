#include<stdio.h>

int strlen(const char arr[])
{
    int length = 0;
    while(arr[length] != '\0'){
        length++;
    }
    return length;
}

int main()
{
    char str[100];
    printf("Give Sentence whose length is to be calculated: ");
    scanf("%s",str);
    printf("String Length = %d\n",strlen(str));
}
