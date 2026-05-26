// 11,   Đọc số tiền gốc (double) và lãi suất năm (%). Tính và in số dư sau đúng 1 năm.
// Ví dụ nhập: 1000.00 5.5 Kết quả: Số dư năm 1: 1055.00
#include <iostream>
using namespace std;
int main() {
    double tiengoc, laisuat;
    cin >> tiengoc >> laisuat;
    double sodu = tiengoc + tiengoc * (laisuat / 100.0);
    cout <<"So du 1 nam: " << sodu << endl;
    return 0;
}
