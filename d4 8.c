#include <stdio.h>

union Data {
  int num;
  float fnum;
};

int main() {
  union Data data;
  char choice;

  printf("Enter 'i' for integer or 'f' for float: ");
  scanf("%c", &choice);

  if (choice == 'i') {
    printf("Enter an integer: ");
    scanf("%d", &data.num);
    printf("You entered: %d", data.num);
  } else if (choice == 'f') {
    printf("Enter a float: ");
    scanf("%f", &data.fnum);
    printf("You entered: %f", data.fnum);
  } else {
    printf("Invalid choice");
  }

  return 0;
}
