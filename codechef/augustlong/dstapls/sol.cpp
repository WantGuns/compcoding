#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int test;
  cin >> test;
  while (test) {
    long long int boxes, apples;
    float exp;
    cin  >> apples >> boxes;
    if (boxes == 1) {
      cout << "NO" << endl;
      break;
    }
    else {
      exp = log(apples)/log(boxes);
      if ((floor(exp) == ceil(exp)) && (exp != 1))
      cout << "NO" << endl;
      else
      cout << "YES" << endl;
    }
    test--;
  }
}
