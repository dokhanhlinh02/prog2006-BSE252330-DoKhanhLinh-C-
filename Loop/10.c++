//Liên tục đọc số nguyên từ người dùng bằng vòng lặp while. 
//Dừng khi nhập 0, sau đó in tổng các số đã nhập.   Ví dụ nhập: 5 10 15 0       Kết quả mong đợi: Sum: 30
#include <iostream>
using namespace std;
int main() {
 int x, sum = 0;
 while (true) {
  cin >> x;
  if (x == 0) break;
  sum += x;
 }
 cout <<"Sum" << sum << endl;
 return 0;
}
