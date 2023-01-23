#include "main.h"

void ft_print_reverse_alphabet(void) {
  char c = 'z';
  while (c >= 'a') {
    ft_putchar(c);
    c--;
  }
}