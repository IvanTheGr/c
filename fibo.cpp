#include<stdio.h>

int fibo(int x){
	if(x==0){
		return 0;
	}else if(x==1){
		return 1;
	}else{
		return fibo(x-1) + fibo(x-2);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d\n",fibo(n));
	return 0;
}
