//Đặt sẵn số mục tiêu là 50. Dùng vòng lặp while để người dùng nhập dự đoán. 
//  Với mỗi lần đoán, in "Higher" hoặc "Lower". Kết thúc khi đoán đúng, in "Correct".
//Ví dụ nhập: 25 75 50
//Kết quả mong đợi: Higher Lower Correct

#include <iostream>
using namespace std;
int main() {
 int doan;
 const int muctieu = 50;
 while (true) {
  cin >> doan;
  if (doan == muctieu) {
   cout << "Correct \n";
   break;
  }
  else if (doan < muctieu) {
   cout << "Higher \n";
  }
  else {
   cout << "Lower \n";
  }
 }
 return 0;
}
