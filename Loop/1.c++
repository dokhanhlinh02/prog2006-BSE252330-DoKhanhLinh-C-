// 1.	Đọc một số nguyên và dùng câu lệnh if/else để in ra "Even" (chẵn) hoặc "Odd" (lẻ).
//Ví dụ nhập: 4
//Kết quả mong đợi: Even   
#include <iostream>
#include <ostream>
int main() {
    int x;
    std::cin >> x;
    if ( x % 2 == 0 ) {
        std::cout << " x la so chan";
    }else {
        std::cout << "x la so le";
    }
    return 0;
}
