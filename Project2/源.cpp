#define _CRT_SECURE_NO_WARNINGS 1
//Դ�ļ���һ�����
#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("ɵ��\n");
//	printf("%d\n",100);//��ӡһ������
//	//sizeof�������ͻ��߱�����ռ�ռ��Сbyte�ֽ�
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	return 0;
//}

//int main()
//{
//	//���� ����=xxx;
//	//���� ����
//
//	int age = 10;
//	float weight = 666.66;
//	
//	age = age + 1;
//	weight = weight - 100;
//	printf("%f\n", weight);
//	printf("%d\n", age);
//
//	return 0;
//}
////%d - ����
////%f - float
////%lf - double

//ȫ�ֱ���
//int a = 100;
//
//int main()
//{
//	//�ֲ�����(����)
//	printf("%d\n", a);
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//scanf���뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	//scanf����
	scanf("%d %d", &a, &b);
	sum=a + b;
	printf("sum=%d\n",sum);
	return 0;
}