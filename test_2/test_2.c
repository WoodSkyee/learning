#include<stdio.h>

//作用域和生命周期
//局部变量作用域：变量所在局部范围
//全局变量作用域：整个工程可用
//
//int g_val = 2021;//全局变量

//int main()
//{
//	printf("hehe\n");
//	printf("g_val=%d\n", g_val);
//
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//		printf("g_val=%d\n", g_val);
//	}
//	//printf("a=%d\n", a);//作用域外报错
//	return 0;
//}

//声明变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//生命周期
//变量的创建和销毁之间的时间段
//局部：进入局部范围生命开始，出范围生命结束
//全局：程序的生命周期

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//常量

//#define MAX 10000
//int main()
//{
	//1.字面常量
	//3.14;
	//10;
	//"a";

	//2.const修饰的常变量
	//const int num = 10;//常变量-具有常属性（无法改变）但仍是变量
	//num = 20;
	//printf("num=%d\n", num);

	//int arr[10] = { 0 };//10个元素

	//const int n = 10;//常变量仍为变量

	//int arr2[n] = { 0 };//n为变量，错误[]只可放常量


	//3.#define定义的标识符常量
	//MAX = 20000;错误
	/*int n = MAX;
	printf("n=%d\n", n);*/


//	return 0;
//}

//4.枚举常量
//可以一一列举的常量
//enum Sex
//{
//	//这种枚举类型变量的未来可能取值
//	//枚举常量
//	MALE=3,//赋初值
//	FEMALE=5,
//	SECRET
//};
//
//
//int main()
//{
//	enum Sex s = MALE;
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	//值和不断增加0，1，2，3，4（无法更改）
//	return 0;
//}

//int main()
//{
//	"abcdefg";
//	"fuck beach";
//
//	return 0;
//}
#include <string.h>
int main()
{
	//字符数组-数组是一组相同类型的元素
	//字符串在结尾位置隐藏了一个\0的字符串
	//\0是字符串结束标志

	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c' ,'\0' };

	//%s打印字符串
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);*/

	//求字符串长度
	//int len=strlen("abc");//string lenth //需要引用头文件strlen
	//printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//实际为随机值
	printf("%d\n", strlen(arr3));
	return 0;
}