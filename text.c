#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;
	int* p = &a;
	printf("%d\n", sizeof(p));
	printf("%p\n", &a);
	return 0;
}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(char*));
//	//printf("%p\n", &ch);
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ  --  ָ���������p
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* -- �����ò�����
//	printf("a = %d\n", a);
//	return 0;
//}

////����
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��ķ�ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//static ����ȫ�ֱ������ı����������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//static  ���ξֲ�����
//�ֲ��������������ڱ䳤
//���κ���  ---  ������ȫ�ֱ���һ��


//��������
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);//err
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);//2 3 4 5 6 
//};
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	//typedef - �����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	//ͬ��
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//	return 0;
//}
//

//int main()
//{
//	//�� - ��0 (1)
//	//�� - 0
//	//&& - �߼��� ��������ȫ���棬��Ϊ�棩
//	//|| - �߼��� ����������һ��Ϊ�棬��Ϊ�棩
//	int a = 0;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//double --int//ǿ������ת��
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��//a=11  b=11
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//

//int main()
//{
//	int a = 0;//4���ֽڣ�32��biteλ
//	int b = ~a;
//	//~ -- ����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д����ʱ�򣬴���Ƕ����ƵĲ���
//	//11111111111111111111111111111111����
//	//11111111111111111111111111111110����=�����ȥ1
//	//10000000000000000000000000000001
//	printf("%d\n", b);
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
