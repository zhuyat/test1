#include <iostream>
#include <string>
int main25() {
    std::string input;
    std::getline(std::cin, input);
    int letter = 0;
    int space = 0;
    int digit = 0;
    int other = 0;
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
            letter++;
        else if (c == ' ') {space++;}
        else if (c >= '0' && c <= '9') { digit++;}
        else {other++;}
    }
    std::cout << "Ӣ����ĸ����: " << letter << std::endl;
    std::cout << "�ո����: " << space << std::endl;
    std::cout << "���ָ���: " << digit << std::endl;
    std::cout << "�����ַ�����: " << other << std::endl;
    return 0;
}