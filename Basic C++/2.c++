// 2,  Đọc giá gốc (double) và số lượng (integer).
// Tính tổng phụ, áp dụng thuế cố định 8.5%, và in ra tổng cuối cùng.
// Ví dụ nhập: 10.00 4 Kết quả: Tổng cuối: 43.40
#include <iostream>
using namespace std;
int main() {
    double gia;
    int soluong;
    cin >> gia >> soluong;
    double tongphu = gia * soluong;
    double tongcuoi = tongphu * 1.085;
    cout << "Tong cuoi:" << tongcuoi << endl;
    return 0;
}
