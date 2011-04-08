#include <stdio.h>
int div(int a,int b);
int main(int argc, const char *argv[])
{
    int a = 6;
    int b = 3;
    int c = 0;

    c = div(a,b);
    printf("c =%d\n",c);
    
    return 0;
}
int div(int a,int b)
{
    return (a/b);
}
