#define _CRT_SECURE_NO_WARNINGS 1
//2021.7.23
#include<stdio.h>
#include"add.h"
#include"add.h"


////���뾲̬��
//#pragma comment(lib;"add.lib");//����ʱ���������ļ�������




//�������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
	//int a = 10;
	//int b = 20;
	//int ret = Add(a, b);
	//printf("%d\n", ret);
//
//	 return 0;
//}


//�����ú�������������ʱ��Ҫд��������
//int Add(int x, int y);//ע�⺯����������������Ҫ��";"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret=Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//int Add(int x, int y)//��������
//{
//	int z = x + y;
//	return z;
//}

//�ֿ�д�ĺô���
//1.����ʵ�ֶ���Э��
//eg:������ test.c
//�ӷ�  add.h add.c
//����  sbu.h sbu.c
//�˷�  mul.h mul.c
//����  div.h div.c
//egc...
//��װ������


//test.c�ļ��������������һ��test.obj
//add.c�ļ��������������һ��add.obj�ļ���
//��������obj�ļ��������ӻ�����һ��test.exe�ļ�
//int Add(int x, int y);//ע�⺯����������������Ҫ��";"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}//��������


