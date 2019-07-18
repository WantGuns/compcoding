#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  int a,b,s,t,m,n,temp,counta = 0,counto=0, i;
  scanf("%d %d", &s, &t);
  scanf("%d %d", &a, &b);
  scanf("%d %d", &m, &n);
  for (i = 0; i<m; i++) {
    scanf("%d", &temp);
    if (temp >= s-a && temp <= t-a)
    counta++;
  }
  for (i = 0; i<n; i++){
    scanf("%d", &temp);
    if (temp >= b-t && temp <= b-s)
    counto++;
  }
  printf("%d\n", counta );
  printf("%d\n", counto );
  return 0;
}
