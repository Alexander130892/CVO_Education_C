#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char* title;
    char* author;
    float price;
}book;


int main(){
    book books[3]={
        {"Lord of the Rings", "J.R.R. Tolkien", 19.99},
        {"1984", "George Orwell", 10.99},
        {"Mythos", "Stephen Fry", 15.99}
    };

    printf("Here are 3 books: \n");
    for(int i=0;i<3;i++){
        printf("%d.\t%s by %s, Price: $%.2f\n", i+1, books[i].title, books[i].author, books[i].price);
    }
    return EXIT_SUCCESS;
}
