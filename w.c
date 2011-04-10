#include <stdio.h>
#include <string.h>
int find_word(char *s,char *w);
int main(int argc, const char *argv[])
{
   char str[100]="This is a wonderful game !";
   char s[100]="game";
   int num = find_word(str,s);
   if (num<0) 
   {
       printf("No such word\n");
   }
   else
   {
        printf("%d\n",num);
        printf("press enter to test...\n");
        getchar();
        printf("%s\n",str+num);
   }
    return 0;
}

int find_word(char *s,char *w)
{
    int i=0;
    while(s[i] !='\0')
    {
        if (strncmp(s+i,w,strlen(w))==0)
        {
            return i;
        }
        i++;
    }
  
    return -1;
}
/*
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
   *p = '\0';                                                                              printf("len = %d\t%s\n",strlen(str),str);
} */  
/*  #include <stdio.h>

int main(int argc, const char *argv[])
{
    int d = 0;
    int i = 0;
    unsigned int mask = (0x01<<(sizeof(int)*8-1));

    puts("please input a number:");
    scanf("%d",&d);

    puts("result:");
    

    for(i=0; i<sizeof(int)*8; i++)
    {
        printf("%d", ((d & mask) != 0 ? 1:0));
        mask >>= 1;
    }
    printf("\n");

    return 0;
}  */
