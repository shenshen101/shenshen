#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",  55 };
	strcpy(b1.name, "C++");//strcpy-string copy-�ַ�������-�⺯��-string.h
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	//  .  �ṹ�����.��Ա
	// ->  �ṹ��ָ��->��Ա
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);

	//printf("����:%s\n", b1.name);
	//printf("�۸�:%dԪ\n", b1.price);
	//b1.price = 100;
	//printf("�Ǽۺ�ļ۸�:%dԪ\n", b1.price);
	return 0;
}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	
//	//int a = 10;
//	////printf("%p\n", &a);
//	//int* p = &a;
//	////printf("%p\n", p);
//	//*p = 20;
//	//printf("%d\n", a);
//	return 0;
//}