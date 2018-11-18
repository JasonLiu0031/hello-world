//回文数：正读与反读相等的数
//2018/11/14 更新
int main() {
    
	int num,s,y=0;
	printf("enter a number");
	scanf("%d", &num);
	s=num;
	while(s>0){
		y=y*10+s%10;
		s=s/10;
	}
	if(y==num){
		printf("yes");
	}else{
		printf("no");
	}


}
