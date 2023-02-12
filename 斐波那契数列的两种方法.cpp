#include<stdio.h>
//int fib(int a){
//	
//	if(a<=2){
//		return 1;
//	}else{
//		return fib(a-1)+fib(a-2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int sum=fib(n);
//	printf("%d",sum);
int fib(int n){
	int a=1;
	int b=1;
	int c=1;
	while(n>2){
		c=a+b;
		a=b;
		b=c;
	n--;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d",&n);
	int sum=fib(n);
	printf("%d",sum);
		return 0;
} 

 
