#include <stdio.h>
#include <string.h>

// Define a structure to store book details
struct Book {
    char title[100];
    char author[100];
    float price;
};

// Function to input details of a book
void inputBookDetails(struct Book *b) {
    printf("Enter the title of the book: ");
    getchar(); // Clear newline from buffer
    fgets(b->title, sizeof(b->title), stdin);
    // Remove newline character from title, if present
    size_t len = strlen(b->title);
    if (len > 0 && b->title[len - 1] == '\n') {
        b->title[len - 1] = '\0';
    }

    printf("Enter the author of the book: ");
    fgets(b->author, sizeof(b->author), stdin);
    // Remove newline character from author, if present
    len = strlen(b->author);
    if (len > 0 && b->author[len - 1] == '\n') {
        b->author[len - 1] = '\0';
    }

    printf("Enter the price of the book: ");
    scanf("%f", &b->price);
}

int main() {
    struct Book books[3];

    // Input details for three books
    for (int i = 0; i < 2; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        inputBookDetails(&books[i]);
    }

    // Find the most expensive and the lowest priced books
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < 2; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
        if (books[i].price < books[minIndex].price) {
            minIndex = i;
        }
    }

    // Display the most expensive book
    printf("\nThe most expensive book:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: $%.2f\n", books[maxIndex].price);

    // Display the lowest priced book
    printf("\nThe lowest priced book:\n");
    printf("Title: %s\n", books[minIndex].title);
    printf("Author: %s\n", books[minIndex].author);
    printf("Price: $%.2f\n", books[minIndex].price);

    return 0;
}
