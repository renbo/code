 #include <stdio.h>
 int sub(int a,int b);

 int main(int argc, const char *argv[])
 {
     int a = 5;
     int b = 3;
     int c = 0;

     c = sub(a,b);
     printf("c = %d\n",c);
     return 0;
 }
 
int sub(int a ,int b)     
{
    return (a-b);
}
