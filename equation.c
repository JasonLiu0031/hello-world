//æ±‚è§£å¦‚ä¸‹æ–¹ç¨‹ç»„
//ax + by = c
//dx + ey = f
//æ³¨æ„è¾“å…¥/è¾“å‡ºï¼Œæ•°æ®ç±»å‹

#include<stdio.h>
int main(void)
{
	float a,b,c,d,e,f,g,h,i;
	float x,y;
	printf("Çó½âax+by=c;dx+ey=fĞÍ¶şÔªÒ»´ÎÏßĞÔ·½³Ì×é\n");
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
	printf("ÎŞ½â");
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
