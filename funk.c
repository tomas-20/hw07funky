#include <stdio.h>
void print_array(int array[], int size) {
  printf("[ ");
  for (int i = 0; i < size; i ++) {
    printf("%d ", array[i]);
  }
  printf("]\n");
}
float average(int array[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i ++) {
    sum += array[i];
  }
  return (float) sum / size;
}
void copy(int a[], int b[], int size) {
  for (int i = 0; i < size; i ++) {
    b[i] = a[i];
  }
}
int main() {
  int bob[5];
  bob[0] = 2;
  bob[1] = 1;
  bob[2] = 8;
  bob[3] = 7;
  bob[4] = 9;
  print_array(bob, 5);
  printf("the average of bob is %f\n", average(bob, 5));
  int joe[5];
  copy(bob, joe, 5);
  print_array(joe, 5);
  return 0;
}
