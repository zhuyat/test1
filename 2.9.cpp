#include <iostream>
int main() {
    double price = 0.8;
    int d = 1;
    int num = 2;
    int tot = num;
    double cost = num * price;
    while (tot + num * 2 <= 100) {
        num = num * 2;
        tot += num;
        cost += num * price;
        d++;
    }
    double average = cost;
        std::cout << "ÿ��ƽ������: " << average << " Ԫ" << std::endl;
    return 0;
}
//����Ϊ2.8
/*#include <iostream>
#include <cmath>
using namespace std;
double xn, xn1,a;
int main() {
    cout << "������Ҫ��������=";
    cin >> a; 
    xn=a;
    xn1 = (xn + a / xn) * 0.5;
    for (;fabs(xn1 - xn) < 1e-5;xn=xn1) 
    {
          xn1 = (xn + a / xn) *0.5;
    }
    if (a < 0) {
        cout << "�������Ϊ��������ƽ����Ϊ������������������ֵ��ƽ��������i: " << xn1 << "i" <<endl;
    }
    else cout << "����ƽ����Ϊ" <<xn1 << endl;
    return 0;
    AIҲ��鲻��������ˣ�����9�𰸲��ԣ�
}*/
/*#include <iostream>
#include <cmath>
int main() {
    double a;
    std::cout << "������һ����a: ";
    std::cin >> a;
    double xn = a;
    double xn1;

    do {
        xn1 = 0.5 * (xn + a / xn);
        if (std::fabs(xn1 - xn) < 1e-5) {
            break;
        }
        xn = xn1;
    } while (true);

    if (a < 0) {
        std::cout << "�������Ϊ��������ƽ����Ϊ������������������ֵ��ƽ��������i: "
                  << xn1 << "i" << std::endl;
    }
    else {
        std::cout << "a��ƽ����Ϊ: " << xn1 << std::endl;
    }return 0;
}
*/


    