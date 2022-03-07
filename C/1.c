/*
Write a menu driven program that depicts the working of a library. The menu
options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book     
5. List the count of books in the library 
6. List the books in the order of accession number 
7. Exit
Create a structure called library to hold accession number, title of the book, author
name, price of the book, and flag indicating whether the book is issued or not.
*/

#include <stdio.h>

struct library {

    int an;
    char title[50];
    char author[50];
    int price;  
    int issued;

} book[50] = {

    1, "Let Us C", "Yashavant Kanethkar", 258, 1,
	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
};

int countBooks() {

    int i=0;

    while(book[i].an){
        i++;
    }

    return i;
}

// addition of new book
void addBookInfo() {

    int nextAn = countBooks();

    book[nextAn].an = nextAn+1;

    printf("Enter title: ");
    scanf("%s",book[nextAn].title);

    printf("Enter author: ");
    scanf("%s",book[nextAn].author);

    printf("Enter price: ");
    scanf("%d",&book[nextAn].price);

    book[nextAn].issued = 1;

    printf("Book added successully!!!!");
}

// displays all the information of all books
void displayBookInfo() {

    int i = 0;

    while(book[i].an) {

        printf("Id: %d\nTitle: %s\nAuthor: %s\nPrice: %d\nAvailable: %d\n",book[i].an, book[i].title, book[i].author, book[i].price, book[i].issued);
        printf("-----------------------\n");
        i++;
    }

}

void listBooksOfAuthor() {

    char name[30];

    printf("Enter author: ");
    gets(name);
    printf("before for loop");
    for (int i=0;i<countBooks();i++) {
        if (name == book[i].author) {
            printf("%s",book[i].title);
        }
    }
}

// displays title of the given book id
void listTitle() {
    
    int an;

    printf("Enter the accession number of book: ");
    scanf("%d",&an);

    for (int i=0;i<countBooks();i++) {
        if (an == book[i].an) {
            printf("%s\n",book[i].title);
        }
    }

}

// list all the books in ascending accession number
void listAccessionNum() {

    for (int i=0;i<countBooks();i++) {

        printf("%d %s \n", book[i].an, book[i].title);
    }
}

int main() {

    int sw;

    do {

        printf("\n1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n\n");
    
        printf("Enter the task that you want to perform: ");
        scanf("%d",&sw);

        switch(sw) {

            case 1:
                addBookInfo();
                break;

            case 2:
                displayBookInfo();
                break;

            case 3:
                listBooksOfAuthor();
                break;

            case 4:
                listTitle();
                break;
        
            case 5:
                printf("The total number of books in library are: %d\n", countBooks());
                break;
        
            case 6:
                listAccessionNum();
                break;
        
            case 7:
                break;
        
            default:
                printf("Please enter valid input");
                break;
        }

    }while(sw!=7);
    
    return 0;
}