//wip for bigger numbers. works fine for smaller ones.
#include <iostream>
using namespace std;

#define ll long long int

int main() {
  ll n, mod = 1000000007, test = 1;
  cin>>n;
  ll a[n], b[n], count=0;
  for (int i = 0; i < n; i++) b[i] = 1;
  for (int i = 0; i < n; i++)
  cin >> a[i];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (j != i) {
        test = 1;
        test = (test * a[i])%mod;
        b[i] = (test * b[j])%mod;
      }
  for (int h = 0; h < n; h++)
    for (int i = 1; i <= b[h]; i++)
        if (b[h] % i == 0){
        count = (count + 1)%mod;
      }
  cout << count % mod;
  return 0;
}
