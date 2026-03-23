#include <stdio.h>

unsigned char switch_byte(unsigned char x) {
  unsigned char high = (x & 0xF0) >> 4;
  unsigned char low  = (x & 0x0F) << 4;
  return high | low;
}

unsigned char rotate_left(unsigned char x, int n) {
  return (x << n) | (x >> (8 - n));
}

int main() {
  unsigned char x = 0xAB;

  printf("switch_byte(%02x) = %02x\n", x, switch_byte(x));

  unsigned char y = 0x61;

  printf("rotate_left(%02x, 1) = %02x\n", y, rotate_left(y, 1));
  printf("rotate_left(%02x, 2) = %02x\n", y, rotate_left(y, 2));
  printf("rotate_left(%02x, 7) = %02x\n", y, rotate_left(y, 7));

  return 0;
}