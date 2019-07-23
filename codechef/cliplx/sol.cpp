#include <iostream>
using namespace std;

int main() {
  int test, mtch, w;
  cin>>test;
  for (int i = 0; i < test; i++) {
    cin >> w >> mtch;
    cout << max(0, (w-mtch))<<endl;
  }
  return 0;
}
