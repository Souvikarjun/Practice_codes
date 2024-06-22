#include <stdio.h>

int main() {
    // Define the revenue sources
    long long sales_revenue = 150000000000LL;    // Use LL to indicate a long long integer
    long long advertising_revenue = 25000000LL;  // Use LL to indicate a long long integer
    long long service_revenue = 35000000LL;      // Use LL to indicate a long long integer

    // Calculate the total revenue
    long long total_revenue = sales_revenue + advertising_revenue + service_revenue;

    // Display the total revenue
    printf("Total Revenue: %lld\n", total_revenue);

    return 0;
}
