#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ten(int i)
{
	return i * 0.1;
}
int twenty(int i)
{
	int k = (i - 100000)*0.075;
	return k + ten(100000);
}
int fourty(int i)
{
	int k = (i - 200000)*0.05;
	return k + twenty(200000);
}
int sixty(int i)
{
	int k = (i - 400000)*0.03;
	return k + fourty(400000);
}
int hunder(int i)
{
	int k = (i - 600000)*0.015;
	return k + sixty(600000);
}
int good(int i)
{
	int k = (i - 1000000)*0.01;
	return k + hunder(1000000);
}
int main()
{
	int i,j;
	scanf("%d", &i);
	if (i <= 100000)
		j = ten(i);
	else if (i < 200000)
		j = twenty(i);
	else if (i < 400000)
		j = fourty(i);
	else if (i < 600000)
		j = sixty(i);
	else if (i < 1000000)
		j = hunder(i);
	else
		j = good(i);
	printf("应发奖金为:%d", j);
	return 0;
}