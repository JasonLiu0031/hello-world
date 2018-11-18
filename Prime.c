/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
//2018/11/14 更新
#include<stdio.h>
int sum_bit(int num) {
	int a,b,c,d,sum;
	a=num/1%10;
	b=num/10%10; 
	c=num/100%10;
	d=num/1000%10;
	sum=a+b+c+d; 
    int i=2;
    int k=1;
	while(i<sum) 
	{
		if(sum%i==0) k=0;
	i=i+1;	
	}
  return k;
	
}

int multi_bit(int num) {
	int a,b,c,d,multi;
	a=num/1%10;
	b=num/10%10; 
	c=num/100%10;
	d=num/1000%10;
    if(d==0&&c!=0&&b!=0&&a!=0) multi=a*b*c;
	else if(d!=0&&c!=0&&b!=0&&a!=0) multi=a*b*c;
	else if(d!=0&&c==0&&b!=0&&a!=0) multi=a*b*d;
	else if(d!=0&&c!=0&&b==0&&a!=0) multi=a*c*d;
	else if(d!=0&&c!=0&&b!=0&&a==0) multi=c*b*d;
	else if(d==0&&c==0&&b!=0&&a!=0) multi=a*b;
	else if(d==0&&c!=0&&b==0&&a!=0) multi=a*c;
	else if(d==0&&c!=0&&b!=0&&a==0) multi=b*c;
    int i=2;
    int k=1;
	while(i<multi) 
	{
		if(multi%i==0) k=0;
	i=i+1;	
	}
  return k;
  
}

int square_sum_bit(int num) {
	int a,b,c,d,square_sum;
	a=num/1%10;
	b=num/10%10; 
	c=num/100%10;
	d=num/1000%10;
	square_sum=a*a+b*b+c*c+d*d;
    int i=2;
    int k=1;
	while(i<square_sum) 
	{
		if(square_sum%i==0) k=0;
	i=i+1;	
	}
  return k;
  
}

int isprime(int num) {
    int i=2;
    int k=1;
	while(i<num) 
	{
		if(num%i==0) k=0;
	i=i+1;	
	}
  return k;
}

int main() {
	int s=0;
	int i=0;
	int j=0;
	int l=1000;
	int m=0;
	int o=0;
	int n=100;
	int t[10000];
	int sum_all;
	while(o<=9999)
	{
		t[o]=0;
		o=o+1;
	}//ʹ����������Ϊ0 
	while(n<=9999&&n>=100){
  if(isprime(n)&&isprime(sum_bit(n))&&isprime(multi_bit(n))&&isprime(square_sum_bit(n)))
   {
   s=s+1;//�������������ĸ��� 
   
   t[i]=n;//������������ֵ������ 
   }
   n=n+1;
   i=i+1;
}
while(j<10000)
{   
	sum_all=sum_all+t[j];
	j=j+1;
}//���㳬�������ĺ� 
while(t[l]==0){
	l=l-1;
}
m=t[l];//�����ĳ���������ֵ��m 



printf(" geshu %d he %d zuida %d",s,sum_all,m);
   return 0;
}

