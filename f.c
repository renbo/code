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
    for (i = 0; i < n; i++) 
    {
        p[i] = i+1;
    }
    return 0;

}
int printf_array(int p[],int n)
{
    int i = 0;
    for (i = 0; i < n; i++)

    {
        printf("%5d",p[i]);

    }
    printf("\n");
}


