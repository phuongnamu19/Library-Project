#pragma once
#include <vector>
#include "RegisteredUser.h"
#include "Book.h"
#include "Collection.h"

class Admin : public RegisteredUser
{
private:
	static vector<Collection> listCollection;
	static vector<Book> listBook;
public:
	Admin();
	Admin(Collection c, Book b);
	~Admin();
	void addBook(Book b);
	Admin createAdmin();
	void show(Book b);
	void hide(Book b);
	void Admin::remove(Collection* collection, Book* book);
	void Admin::edit(Book* book, string title, string author, int pageCount, int freePage, int category,bool visibilityStatus, bool availabilityStatus);
	static void createCollection(int id, string name);
    static void deleteCollection(Collection* collection);
};
