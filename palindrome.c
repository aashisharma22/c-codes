#include <stdio.h>
int main()
{
    int num, reverse=0, remainder, initial;
    scanf("%d",&num);
    initial=num;
    while(num!=0)
    {
        remainder = num%10;
        reverse = reverse*10 + remainder;
        num=num/10;
    } 
    if (initial==reverse){
        printf("PALINDROME");
    }
    else {
        printf("NOT A PALINDROME");
    }
    return 0;
}