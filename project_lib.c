#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create Structure of Library
struct library {
    char bookName[20];
    char bookAuthor[20];
    int bookPages;
    float bookPrice;
};

int main () {

     printf("Welcome to E-Library\n\n");

    // Create a instance
    struct library lib[100];

    char bookName[30];
    char bookAuthor[30];
    int bookPages;
    float bookPrice;
    int i = 0;
    

    printf("Enter book name = ");
    scanf("%s\n", bookName);
    fgets(bookName, sizeof(bookName), stdin);
    printf("%s", bookName);
    
    printf("Enter author name = ");
    scanf("%s\n", bookAuthor);
    fgets(bookAuthor, sizeof(bookAuthor), stdin);
    printf("%s", bookAuthor);

    printf("Enter number of pages = ");
    scanf("%d", &bookPages);
    printf("%d\n", bookPages);

    printf("Enter book price = ");
    scanf("%f", &bookPrice);
    printf("%.2f\n", bookPrice);

    strcpy(lib[i].bookName, bookName);
    strcpy(lib[i].bookAuthor, bookAuthor);
    lib[i].bookPages = bookPages;
    lib[i].bookPrice = bookPrice;
    i++;

    printf("you have entered the following information\n");

        printf("Book name = %s", lib[0].bookName);

        printf("Book author name = %s", lib[0].bookAuthor);

        printf("Book pages = %d\n", lib[0].bookPages);

        printf("Book price = %.2f\n", lib[0].bookPrice);

    return 0;
}
