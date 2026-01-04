#include <stdio.h>

int main() {
    int units;
    float bill = 0, totalBill;
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    if (units <= 50) {
        bill = units * 0.50;
    }
    else if (units <= 150) {
        bill = 50 * 0.50;
        bill += (units - 50) * 0.75;
    }
    else if (units <= 250) {
        bill = 50 * 0.50;
        bill += 100 * 0.75;
        bill += (units - 150) * 1.20;
    }
    else {
        bill = 50 * 0.50;
        bill += 100 * 0.75;
        bill += 100 * 1.20;
        bill += (units - 250) * 1.50;
    }
    
    totalBill = bill + 20;
    
    printf("\nElectricity Bill Details\n");
    printf("------------------------\n");
    printf("Units Consumed: %d\n", units);
    printf("Bill Amount: Rs. %.2f\n", bill);
    printf("Additional Charges: Rs. 20.00\n");
    printf("Total Bill: Rs. %.2f\n", totalBill);
    
    return 0;
}