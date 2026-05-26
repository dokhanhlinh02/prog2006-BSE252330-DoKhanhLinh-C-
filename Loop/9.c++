//9.	Đọc một số nguyên N. Dùng vòng lặp để in bảng cửu chương của N từ 1 đến 5, đúng định dạng N x i = kết quả.
//Ví dụ nhập: 7
//Kết quả mong đợi: 7x1=7 7x2=14 7x3=21 7x4=28 7x5=35

#include <iostream>
using namespace std;
int main() {
 int n;
 cout <<"Nhap n:";
 cin >> n;
 for (int i = 1; i <= 5; i++) {
  cout << n << "x" << i << "=" << n * i << " " << endl;
 }
 return 0;
}
