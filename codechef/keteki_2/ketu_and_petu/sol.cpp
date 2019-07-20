#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int card[n];
  for (int i = 0; i < n; i++) {
    cin>>card[i];
  }
  int mid;
  if (n%2 == 0) mid = n/2;
  else mid = (1 + (n/2));
  cout<<mid<<endl;
  int ketu = 0, petu = 0;

  for (int i = 0; i < mid; i++) {
    petu += card[i];
  }
  for (int i = mid; i < n; i++) {
    ketu += card[i];
  }
  cout<<ketu-petu;
  return 0;
}
