
#include <stdio.h>

int main() {
  char customer[30], accountNumber[30];
  double averageBalance, interest, service;
  int numberOfTransactions;

  // Ask for the customer's name
  printf("Enter your name: ");
  gets(customer);

  // Ask for the customer's account number
  printf("Enter your account number: ");
  gets(accountNumber);

  // Ask for the customer's average balance
  printf("Enter your average balance: ");
  scanf("%lf", &averageBalance);

  // Ask for the customer's number of transactions
  printf("Enter the number of transactions you've made: ");
  scanf("%d", &numberOfTransactions);

  interest = averageBalance * 0.06;
  service = numberOfTransactions * 0.50;

  printf("Name: %s\nAverage balance: $%3.2f\n", customer, averageBalance);
  printf("Interest: $%3.2f\n", interest);
  printf("Service charge: $%3.2f\n", service);

  return 0;
}
