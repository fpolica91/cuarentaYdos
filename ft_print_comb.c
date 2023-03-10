#include "main.h"

void print_sequence(int i, int j, int k) {
  ft_putchar(i + '0');
  ft_putchar(j + '0');
  ft_putchar(k + '0');
  ft_putchar(',');
  ft_putchar(' ');
}

void ft_print_comb() {
  int i = 0;
  int j = 1;
  int k = 2;
  while (i < 7) {
    while (j < 8) {
      while (k < 9) {
        print_sequence(i, j, k);
        k++;
      }
      j++;
      k = j + 1;
    }
    i++;
    j = i;
  }
}

// 012, 013, 014, 015, 016, 017, 018, 112, 113, 114, 115, 116, 117, 118, 212,
// 213, 214, 215, 216, 217, 218, 312, 313, 314, 315, 316, 317, 318, 412, 413,
// 414, 415, 416, 417, 418, 512, 513, 514, 515, 516, 517, 518, 612, 613, 614,
// 615, 616, 617, 618, 712, 713, 714, 715, 716, 717, 718, 

// 012, 013, 014, 015, 016, 017, 018, 023, 024, 025, 026, 027, 028, 034, 035,
// 036, 037, 038, 045, 046, 047, 048, 056, 057, 058, 067, 068, 078, 123, 124,
// 125, 126, 127, 128, 134, 135, 136, 137, 138, 145, 146, 147, 148, 156, 157,
// 158, 167, 168, 178, 234, 235, 236, 237, 238, 245, 246, 247, 248, 256, 257,
// 258, 267, 268, 278, 345, 346, 347, 348, 356, 357, 358, 367, 368, 378, 456,
// 457, 458, 467, 468, 478, 567, 568, 578, 678, 