//素数是只有1和本身是因子的数
//2018/11/14 更新
#include<stdio.h>
int main(void)
{
	int n;
	printf("plese enter a number:");
	scanf("%d",&n);
	int k;
	k=1;
	int i=2;
	while(i<n) 
	{
		if(n%i==0) k=0;
	i=i+1;	
	}
	if(k) printf("prime number");
	else printf("composite number");
	return 0;
}
