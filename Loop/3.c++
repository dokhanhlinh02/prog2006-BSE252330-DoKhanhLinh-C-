//Đọc một điểm số nguyên từ 0 đến 100. Dùng if/else if để in ra điểm chữ (A: 90–100, B: 80–89, C: 70–79, D: 60–69, F: 0–59).                                                      Ví dụ nhập: 85
//Kết quả mong đợi: Grade: B
#include <iostream>
int main() {
    int score;
    std :: cout <<"nhap diem: ";
    std::cin >> score;
    if ( score >= 90 && score <= 100 ) {
        std::cout <<"A";
    }
    else if ( score >= 80 ) {
        std::cout <<"B";
    }
    else if ( score >= 70 ) {
        std::cout <<"C";
    }
    else if ( score >= 60 ) {
        std::cout <<"D";
    }
    else if ( score >= 50 ) {
        std::cout <<"F";
    }
    return 0;
}

