//Đọc một số nguyên dương N. Tính giai thừa (N!) bằng vòng lặp và in kết quả.
//Ví dụ nhập: 4
//Kết quả mong đợi: Factorial: 24
#include <iostream>
 using namespace std;
 int main() {
  int n;
  cout << " Nhap n:";
  cin >> n;
  long long giaithua = 1;
  for ( int i = 1; i <= n; i++ ) {
   giaithua *= i;
   cout <<" Giai thua:" << giaithua << endl;
  }
  return 0;
 }
