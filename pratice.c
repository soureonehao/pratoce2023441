#include<stdio.h>
#define N 10
float Delete(); //��������
float Delete(float height1[], float height) { //���庯��
	int i, j,m;
	for (i = 0; i < N; i++) {
		if (height1[i] == height) { // �����壬������������
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
	printf("������ʮ���˵���ߣ�");
	for (i = 0; i < N; i++) 
		scanf_s("%f", &height2[i]);
	printf("ɾ��ǰ�������б�Ϊ��");
	for (i = 0; i < N; i++) 
		printf("%.2f  ", height2[i]);
	
	printf("\n������Ҫɾ������ߣ�");
	scanf_s("%f", &height3);
	Delete(height2, height3);
	printf("ɾ������б�Ϊ��");
	for (i = 0; i < N ; i++)
		printf("%.2f  ", height2[i]);
}