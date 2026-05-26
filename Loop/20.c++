//Một robot bắt đầu tại X = 0, Pin = 50. Viết vòng lặp nhận mã lệnh:                                
//1 (Đi bộ: X+5, Pin-10)            
//2 (Chạy nhanh: X+15, Pin-25)    
//3 (Sạc: Pin+20)                       
//4 (Dừng: thoát vòng lặp ngay)
//Nếu nhập sai, in "Error" và trừ 5 pin.                                
//Vòng lặp kết thúc khi pin ≤ 0 hoặc nhập 4.                          
//In vị trí và pin cuối cùng.
//Ví dụ nhập: 1 2 3 4
//Kết quả mong đợi: Final Position: 20, Battery: 35
#include <iostream>
using namespace std;
int main() {
 int X = 0, Pin = 50, lenh;
 while (Pin > 0) {
  cin >> lenh;
  if (lenh == 1) {
   X += 5; Pin -= 10;
  }
  else if (lenh == 2) {
   X += 15; Pin -= 25;
  }
  else if (lenh == 3) {
   Pin += 20;
  }
  else if (lenh == 4) break;
  else {
   cout << " Error\n";
   Pin -= 5;
  }
 }
 cout << "Final Position: " << X << ", Battery: "<< Pin << "\n"<< endl;
 return 0;
}
