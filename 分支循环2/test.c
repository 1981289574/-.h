#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i=0;
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d", i);
//		//i = 5;��������forѭ���ڲ��޸�ѭ�����������������ѭ��
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	/*for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);//����������д��������һ��
//	}*/
//	return 0;//���0 0 0 0 0 0 0 0 0 0
//}


//int main()
//{
//	int i = 0;
//	//1.forѭ���ĳ�ʼ�����������ж��������ֶ�����ʡ��
//	//2.�жϲ���ʡ�ԣ���ζ���ж�����ֵΪ��
//	//3.���顣��Ҫ����ʡ��
//	for (;;)//��ʼ�����������ж϶�ûд
//	{
//		printf("hehe");
//
//	}
//	return 0;//��ɴ�����ѭ��
//}

//int main()
//{
//	int i=0;
//	int j=0;
//	for (i = 0; i < 10; i++)//���ѭ��
//	{
//		for (j = 0; j < 10; j++)//�ڲ�ѭ��
//		{
//			printf("hehe\n");
//		}
//	}//���ӡ100��hehe
//	return 0;
//}

//����1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//ʡ��i=0
//	{
//		for (; j < 10; j++)//ʡ��j=0
//		{
//			printf("hehe\n");
//		}
//	}//���ӡ10��hehe
//	return 0;
//}

//����2
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, ++y)
//	{
//		printf("hehe");
//	}//�ɴ�ӡ�ĸ�hehe
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�жϲ���Ϊk = 0��
//	{
//		k++;
//	}//ѭ������Ϊ0
//	return 0;
//}


//do-whileѭ��
//do-whileѭ������﷨
// 
//do 
//    ѭ����䣻
//	while�����ʽ����


//��ӡ1-10
//int main()
//{
//	int i = 0;
//	do 
//	{
//		printf("%d", i);
//		i++;
//	} while (i<=10);//���������Ϳ������ϴ�ӡ
//    //��ӡ���012345678910
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		if (5 == i)
//			break;
//		i++;
//	} while (i < 10);
//	return 0;
//	//��ӡ���0 1 2 3 4 5
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		if (5 == i)
//			continue;
//		i++;
//	} while (i < 10);
//	return 0;
//	//��ӡ���0 1 2 3 4 5֮��5��ʼ��ѭ����
//	//do-while����ѭ��������ִ��һ�Σ���ִ�����ж�
//}


//����n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret=1;
//	printf("������һ��ֵ");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;//������������̫�󡣿�����float��double��
//}

//����1��+2��+3��...
//int main()
//{
//	//˼·�������ÿ�����Ľ׳������
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("������һ��ֵ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;//ÿ�ζ�����sum
//	}
//	printf("%d\n", sum);
//	return 0;//������������̫�󡣿�����float��double��
//}

//3t��һ�����������в��Ҿ����ĳ������n
//��дint binary(int x,int[],int n);
//���ܣ���v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x

//int mian()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[10] = { 0 };��10��0
//	//����7
//	//��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])//����7
//		{
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("�ҵ��ˣ��±��ǣ�%d", i)
//	else
//		printf("�Ҳ���");
//	return 0;
//}

//��һ��˼·
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr[10] = { 0 };��10��0
//	//����7
//	//��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (7 == arr[i])//����7
//		{
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("�ҵ��ˣ��±��ǣ�%d", i)
//	else
//		printf("�Ҳ���");
//	return 0;
//}


//�۰���ҷ�;
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int k = 7;//Ҫ���ҵ�Ԫ��
//	int flag = 0;//�Ҳ���
//	//���м�Ԫ�ص��±�
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < 1)
//		{
//			left = mid + 1;
//		}
//		else if (mid > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���");
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("�ҵ���:%d",mid);
//	else
//		printf("û�ҵ�");
//}

//4t��д���룬��ʾ�����ַ��������ƣ����м��۶�

//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//welc############!!!!
//....
//welcome to bit!!!!!!
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "####################";
//	char ch = "abc";
//	int left = 0;
//	int right =strlen(arr2)-1 ;
//	while(left<=right)//ʹ�õ���while
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //��λ�Ǻ���
//		system("cls");//ִ��ϵͳ��������Ļ�����Դ�������ʾ��������cmd���۲�
//		//���cls����Ϊ�����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}

//5t��д���룬ģ���û���¼���飬����ֻ�ܵ�¼���Ρ�
//��ֻ����������������
//���������ȷ���½�ɹ���
//�����������������˳�����
int main()
{
	int i=0;
	int j=0;
	//������ʵ���������ַ�������123456��
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &password);
		//�����ַ����ıȽϲ����õȺ�==,eg:password=="123456";
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("������������˳���¼");
	return 0;
}