#define _CRT_SECURE_NO_WARNINGS

//네 정수의 최댓값
#include <stdio.h>

int  max4(int a, int b, int c, int d)
{
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;
	return max;
}

int main(void)
{
	int a, b, c, d;
	printf("정수 4개를 입력하시오. ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("max4(%d %d %d %d) = %d\n", a, b, c, d, max4(a, b, c, d));

	return 0;
}


//세 정수의 중앙값
#include <stdio.h>
int med3(int a, int b, int c)
{
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a < b && c > b))
		return b;
	else
		return c;
}


int main()
{
	int a, b, c;
	printf("세 정수를 입력하시오. ");
	scanf("%d %d %d", &a, &b, &c);
	printf("세 정수의 중앙값: %d", med3(a, b, c));

	return 0;
}

