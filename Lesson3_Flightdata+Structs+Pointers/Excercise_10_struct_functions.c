#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* title;
    char* author;
    float price;
}Book;

void printInfo(Book*);

int main(){
    Book books[3]={
        {"Lord of the Rings", "J.R.R. Tolkien", 19.99},
        {"1984", "George Orwell", 10.99},
        {"Mythos", "Stephen Fry", 15.99}
    };

    printf("Here are 3 books: \n");
    for(int i=0;i<3;i++){
        printInfo(&books[i]);
    }
    float input;
    printf("Nieuwe prijs voor Lord of the Rings?:\n ");
    scanf("%f",&input);
    books[0].price=input;
    printf("Update:\n ");
    printInfo(&books[0]);

    return EXIT_SUCCESS;
}

void printInfo(Book* book){
    printf("%s by %s, Price: $%.2f\n", book->title, book->author, (*book).price);

}