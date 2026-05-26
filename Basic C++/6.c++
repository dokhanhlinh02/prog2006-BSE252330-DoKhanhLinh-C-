// 6,  Yêu cầu nhập một số nguyên dương có ít nhất hai chữ số. Trích xuất và in ra chữ số hàng chục.
// Ví dụ nhập: 482 Kết quả: Chữ số hàng chục: 8
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << "Chu so hang chuc: " << (n / 10) % 10 << endl;
    return 0;
}
