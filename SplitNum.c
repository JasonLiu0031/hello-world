//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
#include<stdio.h>

int main() {
	char a;
	
	while((a=getchar())!="\n")
	{
		putchar(a);
		printf(" ");
	}
	return 0;
	
	
	
    
}
