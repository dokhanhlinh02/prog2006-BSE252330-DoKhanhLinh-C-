//1, Viết chương trình yêu cầu người dùng nhập hai số nguyên. Tính và in ra tổng, hiệu, và tích của chúng.
//Ví dụ nhập: 15 7 Kết quả: Tổng: 22, Hiệu: 8, Tích: 105
# include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << "tong:" << a + b << endl;
    cout << "hieu:" << a - b << endl;
    cout << "tich:" << a * b << endl;
    return 0;
}
