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
//	int a = 10;//4个字节
//	int* p = &a;//取地址  --  指针的名字是p
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* -- 解引用操作符
//	printf("a = %d\n", a);
//	return 0;
//}

////函数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//static 修饰全局变量，改变了数量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//static  修饰局部变量
//局部变量的生命周期变长
//修饰函数  ---  与修饰全局变量一样


//声明函数
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
//	//extern - 声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);//err
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
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
//	//typedef - 类型重定义
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
//	//同上
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
//	//真 - 非0 (1)
//	//假 - 0
//	//&& - 逻辑与 （两个数全是真，才为真）
//	//|| - 逻辑或 （两个数有一个为真，则为真）
//	int a = 0;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;//double --int//强制类型转换
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用//a=11  b=11
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//

//int main()
//{
//	int a = 0;//4个字节，32个bite位
//	int b = ~a;
//	//~ -- 按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中储存的时候，存的是二进制的补码
//	//11111111111111111111111111111111补码
//	//11111111111111111111111111111110反码=补码减去1
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
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
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
