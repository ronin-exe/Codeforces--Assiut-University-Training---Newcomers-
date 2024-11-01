#include <bits/stdc++.h>

int main(){
  unsigned long long n;
  std::cin >> n;
    long double i = log2(n);
    if (ceil(i) == floor(i)) {
      std::cout << "YES";
    } else {
      std::cout << "NO";
    }
  return 0;
}