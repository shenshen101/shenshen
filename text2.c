//#include <stdio.h>
#include <stdio.h>
#include <string.h>


int main()
{
	int arr[10] = { 0 };//10������Ԫ�ص�����
	int sz = 0;
	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	//����Ԫ����ĸ���
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[10]);
	printf("sz = %d\n", sz);


	//int a = 10;
	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof(int));
	return 0;
}


//int main()
//{
//	//��2���ƣ�λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = a & b;//����001
//	//int a = 3;//011
//	//int b = 5;//101
//	//int c = a|b;//����111
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;//����110
//	//���ļ������
//	//��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	//��Ӧ�Ķ�����λ����ͬ����Ϊ1
//	printf("%d\n", c);
//	return 0;
//}
//

//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//
//}
//


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[7]);//�±�ķ�ʽ����Ԫ��
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
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���: %d\n", line);
//		line++;
//	};
//	if (line >= 20000);
//		printf("��offer\n");
//
//	return 0;
//}
//

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32 -- 32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32 -- > ʮ���� 26 ->��ΪASCII��ֵ������ַ�
//	return 0;
//}
//


//int main()
//{
//	//printf("c:\\test\\32\\test.c");// \t --ˮƽ�Ʊ��
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	return 0;
//}



//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', 0 };
//	printf("%d\n", strlen(arr1));//strlen -- string length - �����ַ����ĳ���
//	printf("%d\n", strlen(arr2));
//}
//



//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
	//a - 97
	//a - 65
	//ASCII ����
	//ASCII ��ֵ
	//char arr1[] = "abc";//����
	////"abc" -- 'a' 'b' 'c' '\0' --'\0'�ַ����Ľ�����־
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


// #define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//int main()
//{
//	//const - �����ԣ�num���ܱ䣩---const���εĳ�����
//	const int num = 4;//num�Ǳ��������г����ԣ����Խг�����
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	//4//���泣��
//	return 0;
//}


//ö�ٳ�����һһ����
//��ԭɫ���졣�ơ���
//���ڣ�1.2.3.4.5.6.7

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