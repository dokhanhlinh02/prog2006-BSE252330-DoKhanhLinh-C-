// 9,  Đọc bán kính hình tròn (double). Tính và in chu vi, diện tích.
// Định nghĩa Pi = 3.14159. Ví dụ nhập: 5.0 Kết quả: Chu vi: 31.4159, Diện tích: 78.5397
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159;
    double r;
    cin >> r;
    double chuvi = 2 * PI * r;
    double dientich = PI * r * r;
    cout << "Chu vi:" << chuvi << "Dien tich:" << dientich << endl;
    return 0;
}
