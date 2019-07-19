#include <stdio.h>

int main() {
  int n, m, flag, count = 0;
  scanf ( "%d %d", &n, &m);
  int a[n], b[m];
  for (int i = 0; i < n; i ++) {
    scanf("%d" , &a[i]);
  }
  for (int i = 0; i < m; i ++) {
    scanf("%d" , &b[i]);
  }
  for (int num = 1; num < 101; num++) {
    flag = 1;
    for (int i = 0; i< n; i++) {
      if (num % a[i] != 0)
      flag = 0;
    }
    for (int i = 0; i < m; i++){
      if (b[i] % num != 0)
      flag = 0;
    }
    if (flag == 1) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
