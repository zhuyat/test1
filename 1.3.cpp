/*
#include<iostream>
using namespace std;
int main3()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "int bool:" << sizeof(bool) << endl;
	cout << "int float:" << sizeof(float) << endl;
	return 0;
}
*/
//������1.4��ҵ
#include <iostream>
#include <iomanip>
using namespace std;
int main4(){
unsigned int testUnint=65534;//oxfffe
cout << "output in unsigned int 1 type:" << testUnint<< endl;//<<oct;
cout << "output in char type:!" << static_cast<char>(testUnint)<< endl;
cout << "output in short type:" << static_cast<short>(testUnint)<< endl;
/*Ϊʲô���Ϊ-2?:�����޷���ֵǿ��ת��Ϊshort���з���16λ��ʱ��
���λ������Ϊ����λ���������������ʾ���� - 2�Ĳ�����ʽ��*/
cout << "output in int type:" << static_cast<int>(testUnint)<< endl;
cout << "output in double type:"<< static_cast <double>(testUnint)<< endl;
cout << "output in double type:" <<setprecision(4)<< static_cast<double>(testUnint)<< endl;
cout << "output in Hex unsigned int type:" <<hex<< testUnint<< endl; //16�������
cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8�������
double r = 1.01;
int i = static_cast<int>(r);
cout << "ʵ��Ϊ: " << r << endl;
cout << "int����Ϊ: " << i<< endl;
system("pause");
return 0;
}
