#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*	author: Martha Dixon
*	use for cs449 example only, no unauthorized use allowed
*/

typedef struct book {
	char * title;
	char * author;
	int book_num;
} book;


void addBookToLibrary(book * b) {
	// pretend to do something...
	printf("Added %s by %s to library.\n", b->title, b->author);
	return;
}

void lendBook(book * b) {
	//pretend to do something...
	printf("Lent out %s by %s.\n", b->title, b->author);
	return;
}


int main() {
	
	book * book_1 = malloc(sizeof(struct book));
	book * book_2 = malloc(sizeof(struct book));
	
	book_1->title = (char*)malloc(sizeof(char)*20);
	strcpy(book_1->title, "The Great Gatsby");
	book_1->author = (char*)malloc(sizeof(char)*20);
	strcpy(book_1->author, "F. Scott Fitzgerald");
	book_1->book_num = 1;
	
	book_2->title = (char*)malloc(sizeof(char)*20);
	strcpy(book_2->title, "Charlotte's Web");
	book_2->author = (char*)malloc(sizeof(char)*20);
	strcpy(book_2->author, "E.B. White");
	book_2->book_num = 2;
	
	addBookToLibrary(book_1);
	addBookToLibrary(book_2);
	lendBook(book_1);
	lendBook(book_2);
	
	free(book_1->title);
	free(book_1->author);
	free(book_2->title);
	free(book_2->author);
	free(book_1);
	free(book_2);
	
	
	/*
	char book_1_title[20] = "The Great Gatsby";
	char book_1_author[20] = "F. Scott Fitzgerald";
	int book_1_num = 1;
	
	char book_2_title[20] = "Charlotte's Web";
	char book_2_author[20] = "E.B. White";
	int book_2_num = 2;
	
	addBookToLibrary(book_1_title, book_1_author, book_1_num);
	addBookToLibrary(book_2_title, book_2_author, book_2_num);
	
	lendBook(book_1_title, book_1_author, book_1_num);
	lendBook(book_2_title, book_2_author, book_2_num);
*/
	return 0;
}
