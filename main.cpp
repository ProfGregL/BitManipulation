#include <iostream>
#include <cstdio>
#include <cmath>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;

int main() {
  freopen("input.txt","r",stdin);
  int t = 0;
  int n = 0;
  int k = 0;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> n >> k;
    auto start = std::chrono::steady_clock::now();
    int twon = pow(2,n);
    if((k-twon+1) % twon == 0 || (k-twon+1) == 0) { // for n =4 and k = 15 should equal 0
      cout << "Case #" << i << ": ON\n";
    }else {
      cout << "Case #" << i << ": OFF\n";
    }
    auto end = std::chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds:" << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() <<" ns"<<endl;
  }

  return 0;
}
