#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes = amount / 500;
    amount -= notes * 500;
    printf("Rs. 500 notes: %d\n", notes);

    notes = amount / 100;
    amount -= notes * 100;
    printf("Rs. 100 notes: %d\n", notes);

    notes = amount / 50;
    amount -= notes * 50;
    printf("Rs. 50 notes: %d\n", notes);

    notes = amount / 20;
    amount -= notes * 20;
    printf("Rs. 20 notes: %d\n", notes);

    notes = amount / 10;
    amount -= notes * 10;
    printf("Rs. 10 notes: %d\n", notes);

    notes = amount / 5;
    amount -= notes * 5;
    printf("Rs. 5 notes: %d\n", notes);

	notes = amount / 2;
    amount -= notes * 2;
    printf("Rs. 2 notes: %d\n", notes);

    notes = amount;
    printf("Rs. 1 notes: %d\n", notes);

    return 0;
}
