#include <iostream>
#include <cmath>
using namespace std;

#define MOD 1000000007

int main() {
  int test;
  cin >> test;
  while (test) {
    long double boxes, apples;
    float temp;
    cin  >> apples >> boxes;
    temp = (((apples/MOD)/(boxes/MOD))/(boxes/MOD))/MOD;
    if (floor(temp) == ceil(temp))
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
    test--;
  }
  return 0;
}
