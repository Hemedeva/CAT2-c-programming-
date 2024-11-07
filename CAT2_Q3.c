
#include <stdio.h>

int main() {
float hoursWorked, hourlyWage, grossPay, taxes, netPay;
const float OVERTIME_RATE = 1.5;
const float TAX_RATE1 = 0.15;
const float TAX_RATE2 = 0.20;
const float TAX_LIMIT = 600.0;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked > 40) {
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * OVERTIME_RATE);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= TAX_LIMIT) {
        taxes = grossPay * TAX_RATE1;
    } else {
        taxes = (TAX_LIMIT * TAX_RATE1) + ((grossPay - TAX_LIMIT) * TAX_RATE2);
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Print results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
