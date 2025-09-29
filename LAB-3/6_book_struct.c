#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};
void main()
{
    printf("Enter number of books: ");
    int n;
    scanf("%d", &n);

    struct Book books[n];

    for(int i=0; i<n; i++)
    {
        printf("\nEnter details for book %d\n", i+1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    float priceLimit;
    printf("\nEnter price limit: ");
    scanf("%f", &priceLimit);

    printf("\nBooks with price above %.2f:\n", priceLimit);
    for (int i = 0; i < n; i++) {
        if (books[i].price > priceLimit) {
            printf("Title: %s, Author: %s, Price: %.2f\n", 
                    books[i].title, books[i].author, books[i].price);
        }
    }
}