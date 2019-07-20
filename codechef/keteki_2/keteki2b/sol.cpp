#include <iostream>
using namespace std;

int main(){
long long int n, k, temp=0, final=0; 
cin>>n>>k;
long int chips[n];
for(int i=0; i<n; i++)
cin>>chips[i];
  for (int i=0; i<(n-k+1); i++){
    for (int j=i; j<(i+k); j++){
      temp += chips[j];
    }
    if (temp>=final)
    final=temp;
    temp=0;
  }
  cout<<final;
  return 0;
}
