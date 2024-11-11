#include <iostream>
int main24() {
    double num1, num2;
    char op;
    std::cout << "������: ";
    std::cin >> num1;
    std::cout << "�����������(+ - * / %): ";
    std::cin >> op;
    std::cout << "������: ";
    std::cin >> num2;

    switch (op) {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 == 0) {
            std::cerr << "��������Ϊ0��" << std::endl;
        }
        else {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            std::cerr << "��������Ϊ0��" << std::endl;
        }
        else {
            //����ת�����ͣ����ܾ�����ʧ
            std::cout << static_cast<int>(num1) << " % " << 
            static_cast<int>(num2) << " = " <<
            static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
        }
        break;
    default:
        std::cerr << "������Ƿ���" << std::endl;
    }

    return 0;
}