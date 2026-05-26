// 3,  Yêu cầu người dùng nhập một ký tự.
// In ký tự đó và giá trị ASCII tương ứng.
// Ví dụ nhập: A Kết quả: Ký tự: A, ASCII: 65
#include <iostream>
using namespace std;
int main() {
    char kytu;
    cin >> kytu;
    cout << "Ky tu:" << kytu <<", ASCII:" << (int)kytu <<endl;
    return 0;
}
