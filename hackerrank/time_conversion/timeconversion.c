#include <stdio.h>
#include <string.h>
int main()
{
  int h, m, s;
  char t[2];

  scanf("%d:%d:%d%s", &h, &m, &s, t);

  if ( strcmp (t , "PM") == 0 && h != 12)
  {
      h += 12;
  }

  if ( strcmp(t, "AM") == 0 && h == 12)
  {
    h = 0;
  }

  // output

  printf ("%02d:%02d:%02d", h, m, s);
  return 0;
}
