#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

/*int main (void) {
  char i = 97;
  dump(&i, sizeof(i));
  return 0;
}
*/
int main (void) {
  char p = 'A';
  dump(&p, sizeof(p));
  printf("-----\n");
  char p2 = ' ';
  dump(&p2, sizeof(p2));
  printf("-----\n");
  char p3 = '\n';
  dump(&p3, sizeof(p3));
  printf("-----\n");
  char p4 = '$';
  dump(&p4, sizeof(p4));
  printf("-----\n");
  return 0;
}