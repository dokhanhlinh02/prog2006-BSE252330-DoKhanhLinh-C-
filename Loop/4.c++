//Đọc một số nguyên dương N. Dùng vòng lặp while để in ra đếm ngược từ N đến 1, sau đó in "Liftoff!".
//Ví dụ nhập: 3
//Kết quả mong đợi: 3 2 1 Liftoff
 #include <iostream>
 int main() {
   int n;
   std::cout <<"nhap n:";
   std::cin >> n;
   while (n > 0) {
     std::cout <<std :: to_string(n)+ " ";
     n --;
   }
   std::cout <<" Lift off";
   return 0;
 }
