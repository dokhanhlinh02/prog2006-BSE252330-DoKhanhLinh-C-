// 8,  Đọc một số thực. Dùng ép kiểu để tách phần nguyên và phần thập phân.
// Ví dụ nhập: 14.85 Kết quả: Nguyên: 14, Thập phân: 0.85
#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    int nguyen = (int)x;
    double thapphan = x - nguyen;
    cout << "Nguyen:" << nguyen <<", Thap phan: " << thapphan << endl;
    return 0;
}
