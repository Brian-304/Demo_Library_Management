#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//declaration
// Create Structure of Library
typedef struct {
    char bookName[40];
    char bookAuthor[40];
    int bookPages;
    float bookPrice;
} library;

//Structure of Operation
typedef struct {
    int i;
    int myNum;
    int books;
    int select;

} operation;

int main(int argc, const char * argv[]) {
    printf("\n");
    printf("******************** Welcome to E-Library ********************\n");
        //Amount of Books in array
        library lib[100];
        
        //Operation Variables
        operation index;

        index.i = 0;
        index.books = 0;
        index.select = 0;
        //Menu
        while (index.select != 4) {

            printf("\n\n*MENU*\n");
            printf("1. Add book information\n");
            printf("2. Display book information\n");
            printf("3. List the count of books in the library\n");
            printf("4. Exit");
            
            printf("\n\nEnter one of the above: ");
            scanf("%d", &index.select);

            switch (index.select) {
            //If user selects 1
            case 1:
                    printf("Add book information\n\n");

                    printf("\nEnter book name = ");
                    scanf("%d", lib[index.i].bookName);
                    fgets(lib[index.i].bookName, sizeof(lib[index.i].bookName), stdin);
                    printf("%s", lib[index.i].bookName);
            
                    printf("\nEnter author name = ");
                    scanf("%d", lib[index.i].bookAuthor);
                    fgets(lib[index.i].bookAuthor, sizeof(lib[index.i].bookAuthor), stdin);
                    printf("%s", lib[index.i].bookAuthor);
                    
                    printf("\nEnter number of pages = ");
                    scanf("%d", &lib[index.i].bookPages);
                    printf("%d", lib[index.i].bookPages);
                    
                    printf("\n\nEnter book price = ");
                    scanf("%f", &lib[index.i].bookPrice);
                    printf("%.2f", lib[index.i].bookPrice);
                            
                    index.i++;
                    index.books++;
                    break;
                //Display Book
                case 2:
                    printf("\n\nYou have entered the following books:\n\n");
                    for (int i = 0; i < index.books; i++)
                    {
                        printf("Book name = %s", lib[i].bookName);
                        printf("Book author name = %s", lib[i].bookAuthor);
                        printf("Book pages = %d", lib[i].bookPages);
                        printf("\nBook price = $%.2f\n", lib[i].bookPrice);
                        printf("\n");
                    }
                    break;
                //Number of books in library
                case 3:
                    printf("\nNumber of books in library: %d\n", index.books);
                    break;
                //Exit
                case 4:
                    printf("\n");
                    exit(0);
            }

        }
    return 0;
}
