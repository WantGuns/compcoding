#include <iostream>

using namespace std;

int main() {
  long long int test, n;
  cin>>test;
  long long int  one1[test], one2[test];
  for (int i = 0; i < test; i ++){
    one1[i] = 0;
    one2[i] = 0;
  }
  for (int i = 0; i < test; i++) {
    cin>>n;
    int string1[n], string2[n], num1, num2;
    cin>>num1>>num2;
    for (int i = n-1; i >= 0; i--) {
    string1[i] = num1 % 10;
    num1 /= 10;
  }
    for (int i = n-1; i >= 0; i--) {
    string2[i] = num2 % 10;
    num2 /= 10;
  }
    for (int i = 0; i < n; i++) {
      if (string1[i] == 1)
      one1[test]++;
      if (string2[i] == 1)
      one2[test]++;
    }

  }
 for (int i = 0; i < test; i ++){
    if (one1[test] == one2[test])
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
}
  return 0;
}
