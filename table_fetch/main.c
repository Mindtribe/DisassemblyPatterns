#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

static uint8_t table_fetch(uint8_t inputValue);

int main(int argc, char *argv[]) {
  int inputValue = 0;
  if (argc > 1) {
    inputValue = atoi((char const *)argv[1]);
  }
  return (int)table_fetch(inputValue);
}

static uint8_t table_fetch(uint8_t inputValue) {
  static uint8_t const table[] = {
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00
  };
  return table[inputValue&0x0F];
}
