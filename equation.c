//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型

#include<stdio.h>
int main(void)
{
	float a,b,c,d,e,f,g,h,i;
	float x,y;
	printf("���ax+by=c;dx+ey=f�Ͷ�Ԫһ�����Է�����\n");
	printf("a=\n");
	scanf("%f",&a);
	printf("b=\n");
	scanf("%f",&b);
	printf("c=\n");
	scanf("%f",&c);
	printf("d=\n");
	scanf("%f",&d);
	printf("e=\n");
	scanf("%f",&e);
	printf("f=\n");
	scanf("%f",&f);
	g=a*e-b*d;     //|A|
	   if (g==0)
	printf("�޽�");
	   else
       { 
	         h= c*e-b*f;     //|Dx| 
 	         i= a*f-c*d;     //|Dy|
	         x= h/g;
	         y= i/g;
	         printf("x=%.3f\n",x);
	         printf("y=%.3f\n",y);
	   } 
	return 0;
	
	
}
