#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill, surcharge = 0;
    
    // Prompt user for inputs
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    
    // Determine charges per unit based on units consumed
    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }
    
    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;
    
    // Apply surcharge if bill exceeds 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
    }
    
    totalBill += surcharge;
    
    // Ensure minimum bill is 100
    if (totalBill < 100) {
        totalBill = 100;
    }
    
    // Display the output
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f\n", totalBill);

    return 0;
}