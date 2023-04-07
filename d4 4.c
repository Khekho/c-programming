#include <stdio.h>
#include <string.h>

// Structure for holding customer details
struct customer {
    int account_no;
    char name[50];
    float balance;
};

// Function to print the account number and name of each customer whose balance is less than 100 Rs.
void print_low_balance_customers(struct customer c[], int n) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 100) {
            printf("%d\t%s\n", c[i].account_no, c[i].name);
        }
    }
}

int main() {
    int n = 3; // Number of customers
    struct customer c[n];
    
    // Accepting customer details
    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account number: ");
        scanf("%d", &c[i].account_no);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }
    
    // Printing details of all customers
    printf("\nCustomer details:\n");
    printf("Account no.\tName\tBalance\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t%.2f\n", c[i].account_no, c[i].name, c[i].balance);
    }
    
    // Printing details of customers with balance less than 100 Rs
    print_low_balance_customers(c, n);

    return 0;
}
