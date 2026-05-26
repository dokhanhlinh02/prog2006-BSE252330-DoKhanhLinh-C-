// 16,  Nhập số nguyên có đúng 3 chữ số. Đảo ngược các chữ số để tạo số mới và in ra.
// Ví dụ nhập: 491 Kết quả: Số đảo ngược: 194
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int tram = n / 100;
    int chuc = ( n / 10) % 10;
    int donvi = n % 10;
    int daonguoc = donvi * 100 + chuc * 10 + tram;
    cout << " So dao nguoc: " << daonguoc << endl;
    return 0 ;
}
