#include <stdio.h>

struct Player {
    char name[50];
    int runs;
};

int main() {
    int n, totalRuns = 0;

    printf("Enter the number of players: ");
    scanf("%d", &n);

    struct Player team[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of player %d:\n", i+1);

        printf("Name: ");
        scanf("%s", team[i].name);

        printf("Runs Scored: ");
        scanf("%d", &team[i].runs);

        totalRuns += team[i].runs;
    }

    printf("\nTotal Runs Scored: %d", totalRuns);

    return 0;
}
