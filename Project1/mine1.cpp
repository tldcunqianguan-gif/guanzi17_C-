#include <iostream>
using namespace std;

//函数
//要写在主函数外
//int add(int x, int y)
//{
//	return x + y;
//}
//也可以直接写个不返回值的
//void helloWorld()
//{
//	cout << "hello,world!" << endl;
//}

//命名空间namespace
namespace guanzi
{
	int age = 19;
	int fun()
	{
		cout << "guanzi的年龄是:" << age << endl;
		return 0;
	}
}


int main()
{
	//命名空间
	guanzi::fun();
	//函数
	//helloWorld();
	//函数
	//cout << add(1, 2) << endl;

	//endl表示换行，也可以换成" "这种空格
	//cout << "Hello, World!" << endl;
	//cout << "我的下一句话是:" << "hello!!!world!!!" << endl;
	
	//int a = 10;
	//float b = 3.14f;
	//double c = 1.2222555;
	//bool d = true; //0是false，非0是true（1或其他）
	//cout << a << '\n' << b << '\n' << c << '\n' << d << endl;

	//常量的定义:定义常量时必须初始化
	//const int a = 10;
	//cout << a << endl;

	//输入
	//int a,b;
	//cin >> a >> b;
	//cout << a << '\n' << b << endl;
	//system("pause");

	//匈牙利命名法（前面小写的字母是变量的类型）
	//int iGuanzi17;
	
	//switch语句
	//int value = 1;
	//cin >> value ;
	//switch(value)
	//{
	//case 1:
	//	cout << "1" << endl;
	//	break;
	//case 2:
	//	cout << "2" << endl;
	//	break;
	//case 3:
	//	cout << "3" << endl;
	//	break;
	//}

	//for循环
	//int i = 0,count=0;
	//for (; i < 10; i += 1)
	//{
	//	count += 1;
	//}
	//cout << count << endl;

	//while循环
	//int a = 0;
	//while (a<10)
	//{
	//	a += 1;
	//}
	//cout << a << endl;

	//do_while循环语句
	//无论条件真假,先执行代码,条件为假则结束
	
	//跳转语句
	//1.nreak(只在for、while、switch)
	//2.continue:在此处跳出循环，并开启下一次循环
	//3.goto跳转到对应位置并向下执行
	
	//goto
	//int x = 0;

	//jump_to_me:
	//	x += 1;
	//	cout << x << endl;

	//if (x < 10)
	//	goto jump_to_me;

	//引用:int&的作用相当于把两个变量进行绑定，这样两个变量会指向同一个内存地址
	//&引用名=变量名
	//int x = 10;
	//int& bieming = x;
	//bieming= 20;
	//cout << x << endl;
	//cout << bieming << endl;

	//数组
	//int arrName[3] = {0,1,10};   //定义时的[]内部是数组的长度
	//cout << arrName[2] << endl;   //引用时从0开始
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << arrName[i] << endl;
	//}
	//char arrChar[3] = { 'a','b','c' };
	//cout << arrChar[0] << endl;

	return 0;
}

