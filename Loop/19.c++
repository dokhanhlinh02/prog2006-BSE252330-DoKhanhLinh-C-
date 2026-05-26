//19.	Liên tục nhập giá sản phẩm (số thực) trong mô phỏng POS siêu thị cho đến khi nhập -1.0. 
//  Tính tổng. Nếu tổng vượt quá 1000.0 thì giảm giá 10%. In tổng cuối cùng.
//Ví dụ nhập: 500.0 600.0 -1.0
//Kết quả mong đợi: Final Total: 990.0

#include <iostream>
using namespace std;
int main() {
 double gia, tong = 0.0;
 while (true) {
  cin >> gia;
  if (gia == -1.0) break;
  tong += gia;
 }
 if (tong > 1000.0) tong *= 0.9;
 cout << "Final total: " << tong << endl;
 return 0;
}
