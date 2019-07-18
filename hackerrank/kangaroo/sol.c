#include <stdio.h>
#include <math.h>

int main() {
  int x1, v1, x2, v2, check;
  scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
if ((x1>x2 && v2>v1) || (x1<x2 && v2<v1)){
  float n = ((x1 -x2)/(v2-v1));
  check = n;
  if ( check == n )
  printf("YES");
  else
  printf("NO");
  return 0;
}
else
printf("NO");
return 0;
}
