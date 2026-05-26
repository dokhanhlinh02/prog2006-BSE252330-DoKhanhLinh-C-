//Nhập vào ba số nguyên. Dùng câu lệnh điều kiện để tìm và in ra số lớn nhất.
//Ví dụ nhập: 15 42 8
//Kết quả mong đợi: Largest: 42

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap ba so nguyen: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        std::cout << a << std::endl;
    }
    else if (b >= a && b >= c) {
        std::cout << b << std::endl;
    }
    else {
        cout << "So lon nhat la: "<< endl;
    }
    return 0;
}
