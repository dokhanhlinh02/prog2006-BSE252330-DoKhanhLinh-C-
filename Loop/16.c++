//16.	Nhập hai số nguyên dương. 
//  Dùng vòng lặp while để thực hiện thuật toán Euclid tìm và in ra Ước chung lớn nhất (GCD).  
//  Ví dụ nhập: 48 18        Kết quả mong đợi: GCD: 6
#include <iostream>
using namespace std;
int main() {
 int a, b;
 cout << " nhap a, b:";
 cin >> a >> b;
 while ( b != 0 ) {
  int r = a % b;
  a = b;
  b = r;
 }
 cout << "GCD: " << a << endl;
 return 0;
}
