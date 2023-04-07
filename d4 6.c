#include <stdio.h>
#include <string.h>


struct book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    int choice;
    int n = 0; 
    struct book books[100];
    
    do {

        printf("\nMENU\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
             
                printf("\nEnter book details:\n");
                printf("Title: ");
                scanf("%s", books[n].title);
                printf("Author: ");
                scanf("%s", books[n].author);
                printf("Year: ");
                scanf("%d", &books[n].year);
                n++; 
                break;
                
            case 2:
          
                printf("\nBook details:\n");
                printf("Title\tAuthor\tYear\n");
                for (int i = 0; i < n; i++) {
                    printf("%s\t%s\t%d\n", books[i].title, books[i].author, books[i].year);
                }
                break;
                
            case 3:
           
                char author[50];
                int found = 0; 
                printf("\nEnter author name: ");
                scanf("%s", author);
                printf("\nBooks by %s:\n", author);
                printf("Title\tYear\n");
                for (int i = 0; i < n; i++) {
                    if (strcmp(books[i].author, author) == 0) {
                        printf("%s\t%d\n", books[i].title, books[i].year);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No books found by %s\n", author);
                }
                break;
                
            case 4:
              
                printf("\nNumber of books in the library: %d\n", n);
                break;
                
            case 5:
          
                printf("\nExiting...\n");
                break;
                
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
