#include <stdio.h>
#include <string.h>

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int id ;
} Book;

void printBook(Book * b) {
     printf("书标题:%s\n", b->title);
     printf("书作者:%s\n", b->author);
     printf("书类目:%s\n", b->subject);
     printf("书的ID:%d\n", b->id);     
   
}
int main(int argc, char * argv[]) {
    
    Book b;
    strcpy(b.title, "上下五千年");
    strcpy(b.author, "周乐天");
    strcpy(b.subject, "这是一本非常好历史书");
    b.id = 1024;
    printBook(&b);   
}
