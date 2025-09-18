/* c program that takes my brain out of the translation equation */
#include <stdio.h>

int main(void)
{
  int num_positions;
  int decimal_value;
  int total = 0;
  int power_of_16;

  printf("How many hex positions? ");
  scanf("%d", &num_positions);

  for (int position = num_positions - 1; position >= 0; position--) {
    printf("Enter decimal value for position %d: ", position);
    scanf("%d", &decimal_value);

    power_of_16 = 1;
    for (int i = 0; i < position; i++) {
      power_of_16 *= 16;
    }

    int position_value = decimal_value * power_of_16;
    total += position_value;

    printf("  %d * 16^%d = %d\n", decimal_value, position, position_value);
  }

  printf("\nFinal decimal value: %d\n", total);

  return 0;
}
