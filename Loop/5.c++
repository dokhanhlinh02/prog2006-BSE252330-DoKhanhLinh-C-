//Nhập một số nguyên N. Dùng vòng lặp for để tính và in tổng các số từ 1 đến N.
//Ví dụ nhập: 5   Kết quả mong đợi: Sum: 15
#include <iostream>
using namespace std;
int main() {
 int n, sum = 0;
 cin >> n;
 for (int i = 1; i <= n; i++) {
  sum += i;
 }
 cout << "Sum:" << sum << endl;
 return 0;
}
