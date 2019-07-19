#include <stdio.h>
int main() {
  int y;
  scanf("%d", &y);
  if (y <= 1917){
    if (y%4 == 0)
    printf("%d.%02d.%d", 12, 9, y);
    else
    printf("%d.%02d.%d", 13, 9, y);
  }
  if (y == 1918) {
    printf("%d.%02d.%d", 26, 9, y);
  }
  if (y >= 1919 ) {
    if ((y%400 == 0) || (y%4 == 0 && y%100 != 0))
    printf("%d.%02d.%d", 12, 9, y);
    else
    printf("%d.%02d.%d", 13, 9, y);
  }
  return 0;
}
