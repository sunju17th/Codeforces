#include<stdio.h>
#include<math.h>

int main(){
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
if(a+b>c||b+c>a||c+a>b)
{
printf("%0.1f%0.1f%0.1f la ba canh cua mot tam giac", a,b,c);
}
else
{
printf("%0.1f%0.1f%0.1f khong la ba canh cua tam giac", a,b,c);
}
return 0;
}
