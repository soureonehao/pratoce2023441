#include<stdio.h>
#define N 10
float Delete(); //声明函数
float Delete(float height1[], float height) { //定义函数
	int i, j,m;
	for (i = 0; i < N; i++) {
		if (height1[i] == height) { // 函数体，当输入数字与
			m = i;
		}
	}
	for (j = m; j < N - 1; j++) {
		height1[j] = height1[j + 1];
	}
}
void main() {
	float height2[N] = { 0 }, height3;
	int  i, j;
	printf("请输入十个人的身高：");
	for (i = 0; i < N; i++) 
		scanf_s("%f", &height2[i]);
	printf("删除前你的身高列表为：");
	for (i = 0; i < N; i++) 
		printf("%.2f  ", height2[i]);
	
	printf("\n请输入要删除的身高：");
	scanf_s("%f", &height3);
	Delete(height2, height3);
	printf("删除后的列表为：");
	for (i = 0; i < N ; i++)
		printf("%.2f  ", height2[i]);
}