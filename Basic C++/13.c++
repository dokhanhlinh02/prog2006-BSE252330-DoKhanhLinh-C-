// 13,  Nhập một số nguyên dương. Dùng modulo (không dùng if) để in 0 nếu số chẵn, 1 nếu số lẻ.
// Ví dụ nhập: 7 Kết quả: Chẵn/lẻ: 1
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << " Chan/le: " << (n % 2) << endl;
    return 0;
}
