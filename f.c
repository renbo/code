#include <stdio.h>
int mul(int a,int b);
int main(int argc, const char *argv[])
{
    int a = 8;
    int b = 2;
    int c = 0;

    c = mul(a,b);
    printf("c=%d\n",c);

    return 0;

}
int mul(int a,int b)
{
    return(a*b);
}
