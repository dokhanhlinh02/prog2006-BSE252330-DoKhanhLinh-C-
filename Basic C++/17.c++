// 17,  Nhập số thực dương. Làm tròn đến số nguyên gần nhất bằng cách cộng 0.5 rồi ép kiểu int (không dùng <cmath>).
// Ví dụ nhập: 7.6 Kết quả: Làm tròn: 8
#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    int lamtron = (int)(x + 0.5);
    cout << "So lam tron " << lamtron << endl;
    return 0;
}
