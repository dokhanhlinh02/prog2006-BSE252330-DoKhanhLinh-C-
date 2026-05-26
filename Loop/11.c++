//11.	Đọc một số nguyên dương N. Dùng vòng lặp kiểm tra xem nó có ước số nào ngoài 1 và chính nó không. In "Prime" nếu là số nguyên tố, ngược lại in "Not Prime".
//Ví dụ nhập: 7
//Kết quả mong đợi: Prime
#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int n;
 cout << " Nhap n:" ;
 cin >> n;
 bool nguyento = true;
 if (n < 2)nguyento = false;
 for (int i = 2; i <= sqrt(n) ; i++) {
  if ( n % i == 0) {
   nguyento = false;
   break;
  }
 }
 cout << ( nguyento ? " Prime" : " Not Prime") << endl;
 return 0;
}
