#include <stdio.h>
#define N 10
#include <string.h>
void str_test(void);
void init_array(int *p,int n);
void j_game(int *p,int n);
int main(int argc, const char *argv[])
{
//    int array[N];

//    init_array(array,N);
//    j_game(array,N);
      str_test();
     return 0;
}
void str_test(void)
{
    char str[100]="This is only a Game !";
    char *p = str;
    p = strtok(p," ");
    while(p !=NULL)
    {
        printf("%s\n",p);
        p = strtok(NULL," ");
    }
}
void init_array(int *p,int n)
{
    int i=0;
    for (i = 0; i < n; i++) 
    {
        p[i]=1;
    }
}
void j_game(int *p,int n)
{   
    int i =0;
    int interval = 5;
    int out_counter = 0;
    int out_total=0;

    while(out_total<n)
    {
        if (p[i]==1) 
        {
            out_counter++;
            if(out_counter==interval)
            {
                out_counter=0;
                p[i]=0;
                out_total++;
                printf("%5d(out)\n",i+1);
            }
            else
            {
                printf("%5d",i+1);
            }

        }
        i++;
        if(i==N) 
        {
            i=0;
        }
    }
}
