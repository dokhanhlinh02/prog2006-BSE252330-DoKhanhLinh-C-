//Đọc một số nguyên dương N. Thực hiện giả thuyết Collatz: nếu N chẵn thì chia 2, nếu N lẻ thì nhân 3 cộng 1. 
//Lặp cho đến khi N = 1. Đếm và in số bước.
//Ví dụ nhập: 6
//Kết quả mong đợi: Steps
#include <iostream>
using namespace std;
int main() {
 int n;
 cout << "Nhap n:";
 cin >> n;
 int steps = 0;
 while (n != 1) {
  if ( n % 2 == 0) n /= 2;
  else n = n * 3 + 1;
  steps++;
 }
 cout << "Steps:" << steps << endl;
 return 0;
}

