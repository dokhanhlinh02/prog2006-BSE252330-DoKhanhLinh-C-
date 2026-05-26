// 10,  Đọc một ký tự và số nguyên N. Cộng N vào giá trị ASCII của ký tự và in ra ký tự mới.
// Ví dụ nhập: C 3 Kết quả: Ký tự sau dịch: F
#include <iostream>
using namespace std;
int main() {
    char c; // biến lưu ký tự
    int N; // biến lưu số nguyên dịch chuyển
    cin >> c >> N;
    char ketqua = (char)(c+N); // cộng N vào mã ASCII của ký tự
    cout << "Ky tu sau dich: " << ketqua << endl;
    return 0;
}
