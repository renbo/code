#include <stdio.h>
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
    return 0;*/
}

    
