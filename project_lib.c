#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create Structure of Library
typedef struct {
    char bookName[40];
    char bookAuthor[40];
    char bookGenre[40];
    int numberOfCopies;
} library;

// Function to display book info
void display(library book) {
    printf("Book name = %s\n", book.bookName);
    printf("Author name = %s\n", book.bookAuthor);
    printf("Genre name = %s\n", book.bookGenre);
    printf("Number of copies = %d\n", book.numberOfCopies);
    printf("\n");
}

int main(int argc, const char *argv[]) {
    printf("\n");

    //Book Titles
    char titles[20][50] = {"Harry Potter and the Sorcerer’s Stone", "Harry Potter and the Chamber of Secrets", "Harry Potter and the Goblet of Fire", "Don Quixote", "Harry Potter and the Prisoner of Azkaban",
    "The Hobbit", "Wuthering Heights", "The Lord of The Rings", "Good Omens", "Coraline", "The Giver", "Number the Stars", "The Great Gatsby", "To Kill A Mocking Bird", "The Hunger Games", "Catching Fire", 
    "Game of Thrones", "The Wild Robot", "The Lightning Thief", "The Last Olympian"};

    //Book Authors
    char authors[20][40] = {"JK Rowling", "JK Rowling", "JK Rowling", "Miguel de Cervantes", "JK Rowling", "Tolkien", "Tolkien", "Neil Gaiman", "Emily Bronte", "Neil Gaiman", "Lois Lowry", "Lois Lowry", "F. Scott Fitzgerald", "Harper Lee", "Suzanne Collins", 
    "Suzanne Collins", "George R. R. Martin", "Peter Brown", "Rick Riordan", "Rick Riordan"};

    //Book Genres
    char genres[20][30] = {"Fantasy", "Fantasy", "Fantasy", "Parody", "Fantasy", "Fantasy", "Gothic", "Fantasy", "Comedy", "Horror", "Dystopian", "Fiction", "Tragedy", "Gothic", "Dystopian", "Dystopian", "Fantasy", "Fiction", "Fiction", "Fiction"};
    int numCopies[20] = {30, 21, 14, 20, 12, 32, 34, 12, 2, 14, 7, 2, 12, 19, 38, 4, 17, 27, 26, 20};

    printf("******************** Welcome to E-Library ********************\n");

    // Amount of Books in array
    library lib[100];


    //Pre-populate Books
    for (int i = 0; i < 20; i++) {
        strcpy(lib[i].bookName, titles[i]);
        strcpy(lib[i].bookAuthor, authors[i]);
        strcpy(lib[i].bookGenre, genres[i]);
        lib[i].numberOfCopies = numCopies[i];
    }

    // Operation Variables
    int select = 0;
    char author[30];
    char genre[30];

    // Menu
    while (select != 4) {
        printf("\n\n*MENU*\n");
        printf("1. List of books in library\n");
        printf("2. Search all books by author\n");
        printf("3. Search all books by genre\n");
        printf("4. Exit\n");

        printf("\n\nEnter one of the above: ");
        scanf("%d", &select);

        switch (select) {

            //Case 1: Function to print books
            case 1:
                
                printf("\n\nList of books:\n\n");
                for (int i = 0; i < 20; i++) {
                    display(lib[i]);
                }

                break;

            //Case 2: //Search for author
            case 2:

                printf("\n\nEnter Author Name: ");
                getchar();
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = '\0';
                

                for (int i = 0; i < 20; i++)
                {
                    if (strcmp(lib[i].bookAuthor, author) == 0) {
                        display(lib[i]);
                    }
                }
                break;

            //Case 3: Search for genre
            case 3:
                printf("\n\nEnter Genre: ");
                getchar();
                fgets(genre, sizeof(genre), stdin);
                genre[strcspn(genre, "\n")] = '\0';
                

                for (int i = 0; i < 20; i++)
                {
                    if (strcmp(lib[i].bookGenre, genre) == 0) {
                        display(lib[i]);
                    }
                }
                break;

            //Case 4: Exit program
            case 4:
                printf("\nExiting the program.\n");
                exit(0);
                break;
            default:
                printf("Invalid option! Try again.\n");
                break;
        }
    }
    return 0;
}
