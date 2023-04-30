#include "Member.h"

Member::Member(string userName, int ID, string password, string phoneNumber, string fullName) : RegisteredUser(userName, ID, password, phoneNumber, fullName)
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	startYear = 1900 + ltm->tm_year;
	endYear = startYear + 4;
	borrowBook = 0;
}

Member::Member(string userName, int ID, string password, string phoneNumber, string fullName, int startYear, int endYear, int borrowBook) : RegisteredUser(userName, ID, password, phoneNumber, fullName)
{
	this->startYear = startYear;
	this->endYear = endYear;
	this->borrowBook = borrowBook;
}

void Member::borrow(Book* book)
{
    if (book->getAvailabilityStatus() > 0) {
        book->setAvailabilityStatus(book->getAvailabilityStatus() - 1);
        borrowBook++;
        cout << "Book " << book->getTitle() << " borrowed successfully!" << endl;
    } else {
        cout << "Sorry, no copies of this book are currently available." << endl;
    }
}

void Member::returnBook(Book* book)
{
    if (borrowBook > 0) {
        book->setAvailabilityStatus(book->getAvailabilityStatus() + 1);
        borrowBook--;
        cout << "Book " << book->getTitle() << " returned successfully!" << endl;
    } else {
        cout << "You have not borrowed any books." << endl;
    }
}

void Member::subscribe()
{
	cout << "Successfully subscribed the collection" << endl;
}

void Member::unsubscribe()
{
	cout << "Successfully unsubscribed the collection" << endl;
}

void Member::displayCollectionList(bool onlySubcribed)
{
	
}

void Member::displayBorrowList()
{
	
}