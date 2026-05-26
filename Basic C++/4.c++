// 4,  Đọc một chữ cái in hoa. Chuyển nó thành chữ thường bằng cách cộng thêm 32 vào mã ASCII.
// Ví dụ nhập: G Kết quả: Chữ thường: g
#include <iostream>
using namespace std;
int main() {
    char kytu;
    cin >> kytu;
    cout << "Chu thuong :" << (char)(kytu + 32)<< endl;
    return 0;
}
