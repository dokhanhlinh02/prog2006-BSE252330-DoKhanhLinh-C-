//Đọc một số nguyên N. In ra tất cả số chẵn nằm giữa 1 và N (không kể 1 và N) bằng vòng lặp for, cách nhau bằng dấu cách.
//Ví dụ nhập: 10
//Kết quả mong đợi: 2 4 6 8
#include <iostream>
using namespace std;
int main() {
 int n;
 cout << " Nhap n:";
 cin >> n;
 for (int i = 1; i < n; i++) {
  if (i % 2 == 0) {
   cout << to_string(i)+ " " << i << endl;
  }
 }
 return 0;
}


