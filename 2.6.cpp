#include <iostream>
using namespace std;
// �����Լ���ĺ���
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// ����С�������ĺ���
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
//ʹ���Ѷ���õĺ������㣻
int main26() {
    int a, b;
    cout << "������2��������: ";
    cin >> a >>b;
    int x = gcd(a, b);
    int y = lcm(a, b);

    cout << "���Լ��,��С��������: " << x << ","<< y << endl;
    
    return 0;
}