#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int max3(int a, int b, int c)
//{
//	int max = a;
//	if (b > max) max = b;
//	if (c > max) max = c;
//	return max;
//}
//
//int main(void)
//{
//
//	printf("max3(%d, %d, %d) = %d\n", 3, 2, 1, max3(3, 2, 1));
//
//	return 0;
//}


//#include <stdio.h>
//
//int  min4(int a, int b, int c, int d)
//{
//	int min = a;
//	if (min > b) min = b;
//	if (min > c) min = c;
//	if (min > d) min = d;
//	return min;
//}
//
//
//int main(void)
//{
//	/*int a, b, c, d;
//	printf("정수 4개를 입력하시오. ");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("max4(%d %d %d %d) = %d\n", a, b, c, max4(a, b, c, d));*/
//
//	printf("min4(%d, %d, %d %d) = %d\n", 20, 2, 1, 12, min4(20, 2, 1, 12));
//
//	return 0;
//}


//#include <stdio.h>
//
//int  max4(int a, int b, int c, int d)
//{
//	int max = a;
//	if (max < b) max = b;
//	if (max < c) max = c;
//	if (max < d) max = d;
//	return max;
//}
//
//
//int main(void)
//{
//	int a, b, c, d;
//	printf("정수 4개를 입력하시오. ");
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("max4(%d %d %d %d) = %d\n", a, b, c, d, max4(a, b, c, d));
//
//	return 0;
//}


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

