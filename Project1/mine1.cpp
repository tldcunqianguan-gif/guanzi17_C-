#include <iostream>
using namespace std;

//����
//Ҫд����������
//int add(int x, int y)
//{
//	return x + y;
//}
//Ҳ����ֱ��д��������ֵ��
//void helloWorld()
//{
//	cout << "hello,world!" << endl;
//}

//�����ռ�namespace
namespace guanzi
{
	int age = 19;
	int fun()
	{
		cout << "guanzi��������:" << age << endl;
		return 0;
	}
}


int main()
{
	//�����ռ�
	guanzi::fun();
	//����
	//helloWorld();
	//����
	//cout << add(1, 2) << endl;

	//endl��ʾ���У�Ҳ���Ի���" "���ֿո�
	//cout << "Hello, World!" << endl;
	//cout << "�ҵ���һ�仰��:" << "hello!!!world!!!" << endl;
	
	//int a = 10;
	//float b = 3.14f;
	//double c = 1.2222555;
	//bool d = true; //0��false����0��true��1��������
	//cout << a << '\n' << b << '\n' << c << '\n' << d << endl;

	//�����Ķ���:���峣��ʱ�����ʼ��
	//const int a = 10;
	//cout << a << endl;

	//����
	//int a,b;
	//cin >> a >> b;
	//cout << a << '\n' << b << endl;
	//system("pause");

	//��������������ǰ��Сд����ĸ�Ǳ��������ͣ�
	//int iGuanzi17;
	
	//switch���
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

	//forѭ��
	//int i = 0,count=0;
	//for (; i < 10; i += 1)
	//{
	//	count += 1;
	//}
	//cout << count << endl;

	//whileѭ��
	//int a = 0;
	//while (a<10)
	//{
	//	a += 1;
	//}
	//cout << a << endl;

	//do_whileѭ�����
	//�����������,��ִ�д���,����Ϊ�������
	
	//��ת���
	//1.nreak(ֻ��for��while��switch)
	//2.continue:�ڴ˴�����ѭ������������һ��ѭ��
	//3.goto��ת����Ӧλ�ò�����ִ��
	
	//goto
	//int x = 0;

	//jump_to_me:
	//	x += 1;
	//	cout << x << endl;

	//if (x < 10)
	//	goto jump_to_me;

	//����:int&�������൱�ڰ������������а󶨣���������������ָ��ͬһ���ڴ��ַ
	//&������=������
	//int x = 10;
	//int& bieming = x;
	//bieming= 20;
	//cout << x << endl;
	//cout << bieming << endl;

	//����
	//int arrName[3] = {0,1,10};   //����ʱ��[]�ڲ�������ĳ���
	//cout << arrName[2] << endl;   //����ʱ��0��ʼ
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << arrName[i] << endl;
	//}
	//char arrChar[3] = { 'a','b','c' };
	//cout << arrChar[0] << endl;

	return 0;
}

