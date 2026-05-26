// 19,   Nhập giờ (1-12) và phút (0-59). Tính góc chính xác của kim giờ so với vị trí 12 giờ. (30° mỗi giờ, 0.5° mỗi phút).
// Ví dụ nhập: 3 30 Kết quả: Góc kim giờ: 105.0 độ
#include <iostream>
using namespace std;
int main() {
    int gio, phut;
    cin >> gio >> phut;
    double goc = gio * 30 + phut * 0.5;
    cout <<"goc kim gio:" <<goc << "do" <<endl;
    return 0;
}
