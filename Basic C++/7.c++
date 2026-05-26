// 7,  Đọc hai số nguyên A và B. Hoán đổi giá trị của chúng chỉ bằng cộng và trừ, không dùng biến tạm.
// Ví dụ nhập: 10 20 Kết quả: Trước: A=10 B=20, Sau: A=20 B=10
#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    cout << "Truoc: A =" << A << "B = " << B << endl;
    A = A + B;
    B = A - B;
    A = A - B;
    cout << "Sau : A=" << A << "B=" << B << endl;
    return 0;
}
