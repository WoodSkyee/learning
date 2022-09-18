#define _CRT_SECURE_NO_WARNINGS 1
//源文件第一行添加
#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	printf("傻逼\n");
//	printf("%d\n",100);//打印一个整数
//	//sizeof计算类型或者变量所占空间大小byte字节
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	return 0;
//}

//int main()
//{
//	//类型 名字=xxx;
//	//类型 名字
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
////%d - 整形
////%f - float
////%lf - double

//全局变量
//int a = 100;
//
//int main()
//{
//	//局部变量(优先)
//	printf("%d\n", a);
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//scanf输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	//scanf输入
	scanf("%d %d", &a, &b);
	sum=a + b;
	printf("sum=%d\n",sum);
	return 0;
}