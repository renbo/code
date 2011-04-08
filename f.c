#include <stdio.h>

int main(int argc, const char *argv[])
{
    int array[100];
    init_array(array,100);
    printf_array(array,100);

    return 0;
}
int init_array(int p[],int n)
{
    int i =0;
    i = 0;
    while(i<n)
    {
        p[i] = i+1;
        i++;
    }
    return 0;
}
int printf_array(int p[],int n)
{
    int i = 0;
    i = 0;
    while(i<n)
    { 
        printf("%5d",p[i]);
        i++;
    }
    printf("\n");
}
