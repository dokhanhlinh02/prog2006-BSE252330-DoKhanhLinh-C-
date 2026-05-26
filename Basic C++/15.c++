// 15,  Nhập số nguyên lớn biểu thị tổng số giây. Dùng chia và modulo để đổi thành Ngày, Giờ, Phút, Giây.
// Ví dụ nhập: 90061 Kết quả: 1 Ngày, 1 Giờ, 1 Phút, 1 Giây
#include <iostream>
using namespace std;
int main() {
    int tonggiay;
    cin >> tonggiay;
    int ngay = tonggiay / 86400 ;
    int gio = (tonggiay % 86400) / 3600;
    int phut = (tonggiay % 3600) / 60;
    int giay = tonggiay % 60;
    cout << ngay <<" Ngay: "<< gio <<" Gio: : "
    << phut << " Phut:" << giay << " giay" << endl;
    return 0;
}
