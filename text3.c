
#include<stdio.h>

int main()
{
	//δ�����ı�ʶ��
	//����  extern �ⲿ���ŵ�
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
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//��������-ʹ�����뺯��scanf
//	#pragma warning(suppress : 4996)
//	scanf("%d%d",&num1,&num2);//ȡ��ַ����&
//	//C�����﷨�涨�����������ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��
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


//char-�ַ�����
//int main()
//{
//	//char ch = 'A';//�ڴ�
//	//printf("%c\n" , ch);//%c -- ��ӡ�ַ���ʽ����
//	int age = 20;
//	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
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

//����һ����stdio.h���ļ�
//std-��׼ standard input output
//#include <stdio.h>
//int�����ε���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()//������-��������-main���ҽ���һ��
//{
//	//�����������
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//#include
//	printf("hello world\n");
//	return 0;//����0
//
//}