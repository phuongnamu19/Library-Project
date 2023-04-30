#include "Admin.h"

Admin::Admin()
{
	listCollection = {};
	listBook = {};
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

void Admin::remove(Collection* collection, Book* book)
{
    vector<Book*> books = collection->getBookList();
    for (int i = 0; i < books.size(); i++) {
        if (books[i] == book) {
            books.erase(books.begin() + i);
            break;
        }
    }
}

void Admin::edit(Book* book, string title, string author, int pageCount, int freePage, int category,bool visibilityStatus, bool availabilityStatus)
{
    book->setTitle(title);
    book->setAuthor(author);
    book->setPageCount(pageCount);
    book->setFreePage(freePage);
    book->setCategory(category);
	book->setVisibilityStatus(visibilityStatus);
    book->setAvailabilityStatus(availabilityStatus);
}

void Admin::createCollection(int id, string name) {
    Collection collection(id, name);
    listCollection.push_back(collection);
}

void Admin::deleteCollection(Collection* collection) {
    for (auto it = listCollection.begin(); it != listCollection.end(); ++it) {
        if (*it == *collection) {
            listCollection.erase(it);
            break;
        }
    }
    delete collection;
}