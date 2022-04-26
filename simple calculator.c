#include <stdio.h>
int main()
{
    float res;
    scanf("%.1f",&res);
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    char opt;
    scanf("%s",&opt);
    switch(opt)
    {
        case '+':
            res = x+y;
            printf("%.1f", res);
            break;
        case '-':
            res = x - y;
            printf("%.1f",res);
            break;
        case '*':
            res = x*y;
            printf("%.1f",res);
            break;
        case '/':
            res = x/y;
            printf("%.1f",res);
            break;
        
    }
    return 0;
}