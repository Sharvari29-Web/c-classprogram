#include<stdio.h>


int main() {
    float units, bill;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    // Calculate bill based on units consumed
    if (units <= 50) {
        bill = units * 0.50;  // 0.50 per unit for first 50 units
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;  // 0.75 per unit for next 100 units
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;  // 1.20 per unit for next 100 units
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;  // 1.50 per unit for units above 250
    }

    // Add fixed charges (if applicable)
    if (units > 0) {
        bill += 20;  // Fixed charges, e.g., service charges or other fees
    }

    // Output the total bill
    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}
}
