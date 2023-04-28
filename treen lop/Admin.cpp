#include "Admin.h"

Admin::Admin()
{
	listCollection = ;
	listBook =  
}

Admin::Admin(Collection c, Book b)
{
	listCollection.push_back(c);
	listBook.push_back(b);
}

Admin::~Admin()
{
}

void Admin::addBook(Book b)
{
}

Admin Admin::createAdmin()
{
	return Admin();
}

void Admin::show(Book b)
{
}

void Admin::hide(Book b)
{
}

void Admin::remove(Book b)
{
}

void Admin::edit(Book b)
{
}

void Admin::createCollection()
{
}

void Admin::deleteCollection(Collection c)
{
}
