// 14,  Đọc ba điểm kiểm tra (integer) và ba trọng số (double). Tính và in trung bình có trọng số.
// Ví dụ nhập: 80 0.2 90 0.3 85 0.5 Kết quả: Trung bình: 85.5
#include <iostream>
using namespace std;
int main() {
    int diem1, diem2, diem3;
    double ts1, ts2, ts3;
    cin >> diem1 >> ts1 >> diem2 >> ts2 >> diem3 >> ts3;
    double trungbinh = diem1 * ts1 + diem2 * ts2 + diem3 * ts3;
    cout << " Trung binh: " << trungbinh << endl;
    return 0;
}
