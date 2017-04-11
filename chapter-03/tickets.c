
#include <stdio.h>

int main() {
  int reservedPrice, reservedTickets;
  int standsPrice, standsTickets;
  int groundsPrice, groundsTickets;
  int ticketsSold;
  
  float reservedSales, standsSales, groundsSales;
  float totalCollected;

  // Ask for the reserved price, and tickets sold
  printf("Enter the cost for Reserved seat tickets: ");
  scanf("%d", &reservedPrice);
  printf("How many Reserved tickets were sold? ");
  scanf("%d", &reservedTickets);

  // Ask for the stands price, and tickets sold
  printf("Enter the cost for Stands seat tickets: ");
  scanf("%d", &standsPrice);
  printf("How many Stands tickets were sold? ");
  scanf("%d", &standsTickets);

  // Ask for the grounds price, and tickets sold
  printf("Enter the cost for Grounds seat tickets: ");
  scanf("%d", &groundsPrice);
  printf("How many Grounds tickets were sold? ");
  scanf("%d", &groundsTickets);
  
  reservedSales = reservedPrice * reservedTickets;
  printf("Reserved ticket sales: $%.2f\n", reservedSales);
  
  standsSales = standsPrice * standsTickets;
  printf("Stands ticket sales: $%.2f\n", standsSales);
  
  groundsSales = groundsPrice * groundsTickets;
  printf("Grounds ticket sales: $%.2f\n", groundsSales);

  ticketsSold = reservedTickets + standsTickets + groundsTickets;
  totalCollected = reservedSales + standsSales + groundsSales;

  printf("Tickets sold: %d\n", ticketsSold);
  printf("Total money collected: $%.2f\n", totalCollected);
  
  return 0;
}
