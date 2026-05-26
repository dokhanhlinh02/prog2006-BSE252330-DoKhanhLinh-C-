//Nhập một số nguyên N. Tính tổng các số từ 1 đến N bằng vòng lặp, nhưng chỉ cộng số chẵn. 
//Dùng từ khóa continue để bỏ qua các số là bội số của 10.
//Ví dụ nhập: 12
//Kết quả mong đợi: Sum: 24 (2+4+6+8+12)
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0; 
    cout <<"Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 0) continue; 
        if (i % 2 == 0) sum += i;  
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
