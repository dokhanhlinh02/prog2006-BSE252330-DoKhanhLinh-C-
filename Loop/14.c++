//14.	Đọc một số nguyên N. Dùng vòng lặp lồng nhau để in tam giác vuông bằng ký tự * có chiều cao và đáy bằng N.                  Ví dụ nhập: 4
//Kết quả mong đợi: 
//*            
//**
//***
//****
#include <iostream>
using namespace std;
int main() {
 int n;
 cout << "Nhap n:";
 cin >> n;
 for (int i = 1; i <= n; i++) {
  for (int j = 1; j <= i; j++) cout << "*";
  cout << "\n" << endl;
 }
 return 0;
}

