#include <stdio.h>
#include <stdilb.h>
#include <time.h>

#define  N 10
#define  M 10
int main(int argc, const char *argv[])
{
    int array[N][M];
    int i=0;
    int j=0;
    int *p = &array[0][0];
    int temp=0;
////////init///////////////////    
    srand(time(NULL));
    for (i = 0; i < M*N; i++) 
    {
        array[0][i]=rand()%(M*N);
    }
////////////printf//////////////    
/*    for (j = 0; j < N; j++) 
    {
        for (i = 0; i < M; i++) 
        {
            array[j][i]=j*M+i+1;
        }
    }
for (i = 0; i < M*N; i++) 
{
    array[0][i]=i+1;
}    */
///////////////printf////////////////////
    for (j = 0; j < N; j++) 
    {
        for (i = 0; i < M; i++) 
        {
            printf("%5d",array[j][i]);
        }
        printf("\n");
    }
    ///////////////////////////////////
//////////sort///////////////////////

for (i = 0; i < (M*N-1); i++) 
{
    for (j = i+1; j < M*N; j++) 
    {
        if(array[0][i]>array[0][j])
        {
            temp=array[0][i];
            array[0][i]=array[0][j];
            array[0][j]=temp;
        }
    }
}


for(i=0;i<M*N;i++)
{
      if(i%5==0)
      printf("\n");
      printf("%5d",array[0][i]);
}
printf("\n");
    return 0;
}
/*
 * #include <stdio.h>
#define  N  100
#include <string.h>
int main(int argc, const char *argv[])
{
    char str[N]="This is a C world";
    char *p = str;
    char *s = str;
    while(*s !='\0')
    {
        while(*s==' ')s++;
        if (p!=s) 
        {
            *p = *s;
        }
        p++;
        s++;
    }
    *p = '\0';
    printf("len = %d\t%s\n",strlen(str),str);
*/
/*    char str[20]="This is a C world!";
    char *p=str;
    for(p =str; *p!= '\0'; p++)
    {
        if (*p==' ') 
        {
            continue;
         }   
       else
       printf("%c",*p);
        
    }
    printf("\n");
    return 0;*/

 /*   for (p =str; *p!='\0'; p++) 
    {
        putchar(*p);              顺序打印
    }
    printf("\n");
    return 0;          */
   /* while(*p !='\0') p++;
    for(p--; p !=(str-1);p--)    倒序打印
    {
        putchar(*p);
    }
    putchar('\n');
    return 0;
}       */

    
