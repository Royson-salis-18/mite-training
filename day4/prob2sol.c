#include <stdio.h>

typedef struct {
    char title[200];
    char author[100];
    float price;
} fiction;

typedef struct {
    char title[200];
    char subject[100];
    float price;
} non_fiction;

typedef union {
    fiction f;
    non_fiction nf;
} book_type;

typedef struct {
    int type; // 1 for fiction, 2 for non-fiction
    book_type booktype;
} book;

book books[1000];
int bookcount;

void addBooks();
void displayBooks();

int main() {
    addBooks();
    displayBooks();
    return 0;
}

void addBooks() 
{
    printf("Enter the number of books:");
    scanf("%d", &bookcount);

    for (int i = 0; i < bookcount; i++) {
        printf("Enter the type of book (1 for Fiction, 2 for Non-Fiction): ");
        scanf("%d", &books[i].type);
        switch (books[i].type) {
            case 1:
                printf("Enter the fiction book details (title, author, price): ");
                scanf("%s %s %f", books[i].booktype.f.title, books[i].booktype.f.author, &books[i].booktype.f.price);
                break;
            case 2:
                printf("Enter the non-fiction book details (title, subject, price): ");
                scanf("%s %s %f", books[i].booktype.nf.title, books[i].booktype.nf.subject, &books[i].booktype.nf.price);
                break;
            default:
                printf("Invalid book type\n");
                i--; // decrement to repeat this iteration
                break;
        }
    }
}

void displayBooks()
{
    for (int i = 0; i < bookcount; i++) 
    {
        if (books[i].type == 1) {
            printf("Fiction Book:\n");
            printf("Title: %s\n", books[i].booktype.f.title);
            printf("Author: %s\n", books[i].booktype.f.author);
            printf("Price: %.2f\n\n", books[i].booktype.f.price);
        } 
        else if (books[i].type == 2) 
        {
            printf("Non-Fiction Book:\n");
            printf("Title: %s\n", books[i].booktype.nf.title);
            printf("Subject: %s\n", books[i].booktype.nf.subject);
            printf("Price: %.2f\n\n", books[i].booktype.nf.price);
        }
    }
}






