//Nhập hai số nguyên và một ký tự biểu diễn toán tử (+, -, *, /).
//Dùng switch để thực hiện phép toán và in kết quả.Ví dụ nhập: 10 5 /Kết quả mong đợi: Result: 2
//8
 #include <iostream>
 using namespace std;
 int main() {
  int a, b;
  char c;
  cin >> a >> b >> c;
  switch (c) {
   case '+':
    cout << a + b << "\n";
    break;
   case '-':
    cout << a - b << "\n";
    break;
   case '*':
    cout << a * b << "\n";
    break;
   case '/':
    cout << a / b << "\n";
    break;
   default:
    cout << "Invalid input!\n";
  }
  return 0;
 }
