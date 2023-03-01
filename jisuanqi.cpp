#include<stdio.h>
void menu() {
	printf("******1.Add    2.Sub*****\n");
	printf("******3.Mul    4.Div*****\n");
	printf("******    0.exit  *******\n");
}
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}

int main() {
	int input = 0;
	int x = 0;
	int y = 0;
	do {
		menu();
		printf("请输入");
		scanf("%d", &input);
		printf("请输入两个数字：");
		scanf("%d%d", &x, &y);
		switch (input) {
			case 1:
				printf("%d", Add(x, y));
				break;
			case 2:
				printf("%d", Sub(x, y));
				break;
			case 3:
				printf("%d", Mul(x, y));
				break;
			case 4:
				printf("%d", Div(x, y));
				break;
				case 0:
			    printf("退出");
				break;
				default :
					printf("请重新输入"); 
				 break;
				 
		}
	} while (input);
	return 0;
}
