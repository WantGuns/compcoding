// Does not work right now. but as i saw the constraints right now, it would be easier
//to follow it instead. this would/should work (in the future) with larger contraints


#include <iostream>
using namespace std;

int main(){
  int n, m, temp, num[1000], flag = 1;
  cin>>n>>m;
  int  a[n], b[m];
  for (int i = 0; i < n ; i++) {
    cin >> a[i];
  }
  for (int j = 0; j < m ; j++) {
    cin >> b[m];
  }
  // sorting a
  for (int i = 0; i < n ; i++) {
    if ( a[i] > a[i+1] ) {
      temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
      i = 0;
    }
  }
  // sorting b
  for (int i = 0; i < m ; i++) {
    if ( b[i] > b[i+1] ) {
      temp = b[i];
      b[i] = b[i+1];
      b[i+1] = temp;
      i = 0;
    }
  }
// creating an array with all the numbers between a[n] and b[0]
  for (int i = 1; num[i] < b[0] ; i++ ) {
    num[0] = a[n];
    num[i] = num[i-1] + 1;
  }

  for(int i = 0; num[i] != '\n'; i++) {
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < m; k++) {
        if (b[k] % num [i] != 0) {
          flag = 0;
        }
      }
      if (flag == 1) {
        if (num[i] % a[j] != 0)
        flag = 0;
      }
    }
    if (flag == 1) {
      cout << num[i];
    }
  }
  return 0;
}
