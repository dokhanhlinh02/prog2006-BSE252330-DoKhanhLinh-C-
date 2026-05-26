// 20,  Thực hiện một bước của bộ sinh số giả ngẫu nhiên. Nhập seed X. Tính số tiếp theo theo công thức: (1664525*X+1013904223)%4294967296.
// Dùng unsigned int để tránh tràn.
// Ví dụ nhập: 1   Kết quả: Seed tiếp theo: 1015568748
#include <iostream>
using namespace std;
int main() {
    unsigned int X;
    cin >> X; 
    unsigned int next = (1664525u * X + 1013904223u) % 4294967296u;
    cout << "Seed tiep theo: " << next << endl;
    return 0;
}
