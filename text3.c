
#include<stdio.h>

int main()
{
	//未声明的标识符
	//声明  extern 外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}


//int global = 2023;
//
//void text()
//{
//	printf("text()-- %d\n", global);
//}
//int main()
//{
//	text();
//	printf("%d\n", global);
//	return 0;
//}
//


//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//输入数据-使用输入函数scanf
//	#pragma warning(suppress : 4996)
//	scanf("%d%d",&num1,&num2);//取地址符号&
//	//C语言语法规定，变量定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8         --sizeof(long) >= sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}


//char-字符类型
//int main()
//{
//	//char ch = 'A';//内存
//	//printf("%c\n" , ch);//%c -- 打印字符格式数据
//	int age = 20;
//	printf("%d\n", age);//%d -- 打印整形十进制数据
//	return 0;
//}
//
//
//

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//包含一个叫stdio.h的文件
//std-标准 standard input output
//#include <stdio.h>
//int是整形的意思
//main前面的int表示main函数调用返回一个整型值
//int main()//主函数-程序的入口-main有且仅有一个
//{
//	//这里完成任务
//	//库函数-C语言本身提供给我们使用的函数
//	//#include
//	printf("hello world\n");
//	return 0;//返回0
//
//}