#include <iostream>
using namespace std;

int main() {
  int test;
  cin >> test;
  while (test) {
    int n;
    cin >> n;
    int a[n], b[n], diff[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      diff[i] = max(((a[i]*20) - (b[i]*10)), 0);
    }
    int maxdiff = 0;
    for (int i = 0; i < n; i++) {
      if (maxdiff <= diff[i])
      maxdiff = diff[i];
    }
    cout << maxdiff << endl;
    test--;
  }
}
