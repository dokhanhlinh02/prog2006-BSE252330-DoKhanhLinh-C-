//4
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
