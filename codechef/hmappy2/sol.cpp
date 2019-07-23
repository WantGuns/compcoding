#include <iostream>
using namespace std;

int main() {
  int test, a, b, n, k;
  cin >> test;
  while (test) {
    cin >> n >> a >> b >> k;
    int count= 0;
    for (int i = 1; i <= n; i++)
      if (i%(a*b) != 0 && (i%a == 0 || i%b == 0))
        count++;
    if (count >= k) cout << "Win" << endl;
    else cout << "Lose" << endl;
    test--;
  }
  return 0;
}
