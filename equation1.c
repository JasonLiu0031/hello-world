//求解一元二次方程的根
//查阅sqrt()函数
//注意有没有解


#include<stdio.h>
#include<math.h>
int main(void)
{
	float a,b,c,d;
	printf("���ax^2+bx+c=0��һԪ���η��̵Ľ�\n");
	printf("a=\n");
	scanf("%f",&a);
	printf("b=\n");
	scanf("%f",&b);
	printf("c=\n");
	scanf("%f",&c);
	d=b*b-4*a*c;
	   if(d<0)
	     printf("�޽�");
		   else
		     {
		     	float e,f,g;
		     	e=-b+sqrt(d);
		     	f=-b-sqrt(d);
		     	g=2*a;
		     	float x1,x2;
		     	x1=e/g;
		     	x2=f/g;
		     	printf("x1=%.3f\n",x1);
		     	printf("x2=%.3f\n",x2);
			  } 
	return 0;
}
