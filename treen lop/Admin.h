#pragma once
#include <vector>
#include "RegisteredUser.h"
#include "Book.h"
#include "Collection.h"

class Admin :public RegisteredUser
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
	void remove(Book b);
	void edit(Book b);
	void createCollection();
	void deleteCollection(Collection c);
};

