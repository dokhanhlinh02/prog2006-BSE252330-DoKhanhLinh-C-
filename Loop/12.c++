//Nhập một số nguyên N.
//In ra N số đầu tiên của dãy Fibonacci bằng vòng lặp, cách nhau bằng dấu cách.     
//Ví dụ nhập: 6       Kết quả mong đợi: 0 1 1 2 3 5
#include <iostream>
using namespace std;
int main() {
 int n;
 cout << "Nhap n:";
 cin >> n;
 int a = 0, b = 1;
 for (int i = 1; i <= n; i++ ) {
  cout << a << " ";
  int next = a + b;
  a = b;
  b = next;
 }
 cout << endl;
 return 0;
}
