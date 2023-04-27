#include <stdio.h>

int add() {
  float num1;
  float num2;
  float sum;
  printf("Enter 1st number: ");
  scanf("%f", &num1);
  printf("Enter 2nd number: ");
  scanf("%f", &num2);
  sum = num1 + num2;
  printf("Sum is: %f", sum);
  return 0;
}
int sub() {
  float num1;
  float num2;
  float diff;
  printf("Enter 1st number: ");
  scanf("%f", &num1);
  printf("Enter 2nd number: ");
  scanf("%f", &num2);
  diff = num1 - num2;
  printf("Sum is: %f", diff);
  return 0;
}
int mult() {
  float num1;
  float num2;
  float product;
  printf("Enter 1st number: ");
  scanf("%f", &num1);
  printf("Enter 2nd number: ");
  scanf("%f", &num2);
  product = num1 * num2;
  printf("Sum is: %f", product);
  return 0;
}
int div() {
  float num1;
  float num2;
  float quo;
  printf("Enter 1st number: ");
  scanf("%f", &num1);
  printf("Enter 2nd number: ");
  scanf("%f", &num2);
  quo = num1 / num2;
  printf("Sum is: %f", quo);
  return 0;
}
int main() {
  char operation;
  printf("Enter Operator (+ - * /): ");
  scanf("%c", &operation);
  if (operation == '+') {
    add();
  }
  if (operation == '-') {
    sub();
  }
  if (operation == '*') {
    mult();
  }
  if (operation == '/') {
    div();
  }
  if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
    printf("Bad Operator.\n");
    main();
  }
  return 0;
