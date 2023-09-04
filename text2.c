//#include <stdio.h>
#include <stdio.h>
#include <string.h>


int main()
{
	int arr[10] = { 0 };//10个整形元素的数组
	int sz = 0;
	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//计算元素组的个数
	//个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[10]);
	printf("sz = %d\n", sz);


	//int a = 10;
	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(int));
	return 0;
}


//int main()
//{
//	//（2进制）位操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = a & b;//等于001
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = a|b;//等于111
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;//等于110
//	//异或的计算规律
//	//对应的二进制位相同，则为0
//	//对应的二进制位不相同，则为1
//	printf("%d\n", c);
//	return 0;
//}
//

//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//
//}
//


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[7]);//下标的方式访问元素
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);//sum = num1 + num2
//	sum = Add(a,b);//sum = a+b
//	printf("sum = %d\n", sum);
//	return 0;
//}
//


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码: %d\n", line);
//		line++;
//	};
//	if (line >= 20000);
//		printf("好offer\n");
//
//	return 0;
//}
//

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32 -- 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32 -- > 十进制 26 ->作为ASCII码值代表的字符
//	return 0;
//}
//


//int main()
//{
//	//printf("c:\\test\\32\\test.c");// \t --水平制表符
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%d\n", strlen(arr1));//strlen -- string length - 计算字符串的长度
//	printf("%d\n", strlen(arr2));
//}
//



//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
	//a - 97
	//a - 65
	//ASCII 编码
	//ASCII 码值
	//char arr1[] = "abc";//数组
	////"abc" -- 'a' 'b' 'c' '\0' --'\0'字符串的结束标志
	//char arr2[] = { 'a', 'b', 'c', 0};
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
//	return 0;
//}
//

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


// #define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	//const - 常属性（num不能变）---const修饰的常变量
//	const int num = 4;//num是变量，但有常属性，所以叫常变量
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//4//字面常量
//	return 0;
//}


//枚举常量：一一变量
//三原色：红。黄。蓝
//星期：1.2.3.4.5.6.7

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
////int main()
////{
////	printf("%d\n", RED);
////	printf("%d\n", YELLOW);
////	printf("%d\n", BLUE);
////	return 0;
////};
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	printf("%d\n", color);
//	return 0;
//}