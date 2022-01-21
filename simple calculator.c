#include <stdio.h>
int add(int x,int y){
    return (x+y)
}

int sub(int x,int y){
    return (x-y)
}

int mul(int x,int y){
    return (x*y)
}

int div(int x,int y){
    return (x/y)
}

int rem(int x,int y){
    return (x%y)
}


int main(void){
    int a=21,b=10;
    int c=add(a,b);
    int d=sub(a,b);
    int e=mul(a,b);
    int f=div(a,b);
    int g=rem(a,b);
    printf('The sum is %d',c);
    printf('The subtracting result is %d',d);
    printf('The product is %d',e);
    printf('The quotient is %d',f);
    printf('The remainder is %d',g);

}