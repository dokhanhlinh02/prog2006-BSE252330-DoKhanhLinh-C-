// 18,   Nhập bốn số nguyên (0 hoặc 1), biểu diễn chuỗi nhị phân 4-bit. Tính và in giá trị thập phân.
// Ví dụ nhập: 1 0 1 1 Kết quả: Thập phân: 11
#include <iostream>
using namespace std;
int main() {
    int b1, b2, b3, b4;
    cin >> b1 >> b2 >> b3 >> b4;
    int thapphan = b1 * 8 + b2 * 4 + b3 * 2 + b4 * 1;
    cout << "Thap phan: "<< thapphan << endl;
    return 0;
}
