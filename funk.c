#include <stdio.h>
void print_array(int array[]) {
  printf("[ ");
  for (int i = 0; i < sizeof *array; i ++) {
    printf("%d ", array[i]);
  }
  printf("]\n");
}
int main() {
  int bob[4];
  bob[0] = 2;
  bob[1] = 1;
  bob[2] = 8;
  bob[3] = 7;
  print_array(bob);
  return 0;
}
