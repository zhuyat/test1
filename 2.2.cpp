/*#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "����X= ";
	cin >> x;
	if (0 < x && x < 10) {
		if ( x <5) {
			if (1 <= x && x < 5) {
				y = 2 / (4 * x) + 1;
			}
			else y =(-2)* x + 3;
		}
		
		else {
			y = x * x;
		}
		cout << "���y= " << y << endl;
	}
	else cout << "x��ΧӦΪ 0<x<10" << endl;
	return 0;
}*/

#include <iostream>
int main23() {
    double s1, s2, s3;
    std::cout << "���������εĵ�һ����: ";
    std::cin >> s1;
    std::cout << "���������εĵڶ�����: ";
    std::cin >> s2;
    std::cout << "���������εĵ�������: ";
    std::cin >> s3;
    // �ж������Ƿ��ܹ��������Σ���������֮�ʹ��ڵ�����
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        double c = s1 + s2 + s3;
        std::cout << "�����ε��ܳ�Ϊ=" << c << std::endl;
        // �ж��Ƿ�Ϊ����������
        if (s1 == s2 || s1 == s3 || s2 == s3) {
            std::cout << "���������ǵ���������" << std::endl;
        }
        else {
            std::cout << "�������β��ǵ���������" << std::endl;
        }
    }
    else {
        std::cout << "��������߲��ܹ���������" << std::endl;
    }

    return 0;
}