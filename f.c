 #include <stdio.h>
 int add(int a,int b);

 int main(int argc, const char *argv[])
 {
     int a = 5;
     int b = 6;
     int c = 0;

     c = add(a,b);
     printf("c = %d\n",c);
     return 0;
 }
 
int add(int a ,int b)     
{
    return (a+b);
}
