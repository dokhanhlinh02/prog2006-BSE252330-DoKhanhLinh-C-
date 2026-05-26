//15.	Đọc một số nguyên N. Dùng vòng lặp lồng nhau để in hình vuông rỗng kích thước NxN (chỉ viền ngoài là *, bên trong là khoảng trắng).
//Ví dụ nhập: 4
//Kết quả mong đợi:   
//****     
//*  *
//*  *
//****
#include <iostream>
using namespace std;
int main() {
 int n;
 cout << "Nhap n:";
 cin >> n;
 for (int i = 1; i <= n; i++) {
  for (int j = 1; j <= n; j++) {
   if (i == 1 || i == n || j == 1 || j == n) cout << "*";
   else cout << " ";
  }
  cout << "\n" << endl;
 }
 return 0;
}
