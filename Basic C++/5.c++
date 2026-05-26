// 5,  Đọc một số nguyên biểu thị tổng số phút. Dùng phép chia và modulo để đổi thành giờ và phút còn lại.
// Ví dụ nhập: 135 Kết quả: 2 Giờ, 15 Phút
#include <iostream>
using namespace std;
int main() {
    int tongphut;
    cin >> tongphut;
    cout << tongphut / 60 << "Gio, " << tongphut % 60 << "phut" << endl;
    return 0;
}
