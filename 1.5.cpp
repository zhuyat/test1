#include <iostream>
#include <iomanip>//���ѧ����û��ӡ��
int main5() {
    double f;
    std::cout << "�����¶ȣ�";
    std::cin >> f;

    double c = (f - 32) * 5.0 / 9.0;
    std::cout << std::fixed <<std::setprecision(2) << "�����¶�Ϊ��" << c << std::endl;

    return 0;
}