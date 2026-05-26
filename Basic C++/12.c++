// 12,   Yêu cầu nhập số nguyên dương có đúng 3 chữ số. Tách từng chữ số bằng chia và modulo, rồi in tổng.
// Ví dụ nhập: 372 Kết quả: Tổng các chữ số: 12
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; 
    int tram = n //100;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;
    int tong = tram + chuc + donvi;
    cout << " Tong cac chu so : "<< tong << endl;
    return 0;
}
