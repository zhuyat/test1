#include<iostream>
using namespace std;
int main27()
{
	int n = 1, m;
	cout << "��ϣ���м��У� ";
	cin >> m;
	for (; n <= m; n++) {
		for (int t=0; t < n; t++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
/*#include <iostream>

int main() {
	for (int i = 1; i <= 5; i++) {  // ������������5��
		for (int j = 0; j < i; j++) {  // ����ÿ�е��Ǻ���������i����i���Ǻ�
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}*/