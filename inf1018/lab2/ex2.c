#include <ctype.h>
#include <stdio.h>
/*
int string2num (char *s, int base) {
  int a = 0;
  for (; *s; s++)
    a = a*(base) + (*s - '0');
  return a;
}
*/
int string2num(char *s, int base) {
    int a = 0;
    int dig;

    for (; *s; s++) {
        if (isdigit(*s))
            dig = *s - '0';
        else if (islower(*s))
            dig = *s - 'a' + 10;
        a = a * base + dig;
    }

    return a;
}

int main(void) {
  printf("%d\n", string2num("1a", 16));
  printf("%d\n", string2num("a09b", 16));
  printf("%d\n", string2num("z09b", 36));
  return 0;
}