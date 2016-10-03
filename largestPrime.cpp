#include <iostream>

int largestPrimeFactor(long long int& num) {
  int lpf = 2;
  while (num > lpf)  {
    if(num % lpf == 0) {
      num /= lpf;
      lpf = 2;
    } else {
      lpf++;
    }
  }
  return lpf;
}

int main() {
  long long int num = 0;
  std::cout << "Enter the number: " << std::endl;
  std::cin >> num;
  std::cout << "Largest prime factor is: " << largestPrimeFactor(num) << std::endl;
  return 0;
}
