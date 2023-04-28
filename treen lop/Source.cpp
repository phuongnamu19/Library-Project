#include <iostream>
#include "Menu.h"

using namespace std;

enum ACTION {
	LOGIN,
	LOGOUT,
	REGISTER,
	GUESS,
	ADD,
	SHOW,
	HIDE,
	EDIT,
	REMOVE,
	MANAGE_COLLECTION,
	BORROW,
	RETURN,
	SUBCRIBE,
	UNSUBCRIBE,
	READ,
	SEARCH_TITLE,
	SEARCH_SERIAL,
	EXIT
};

int main() {
	Menu* mainMenu = new Menu("Main Menu", "Welcome");
	Menu* login = new Menu("Login", "Welcome Back", LOGIN);
	Menu* registering = new Menu("Register", "Welcome New Member", REGISTER);
	Menu* guess = new Menu("Login As Guess", "Welcome To Our Community", GUESS);
	Menu* exit = new Menu("Exit", "See you soon", EXIT);

	mainMenu->addSubMenu(login);
	mainMenu->addSubMenu(registering);
	mainMenu->addSubMenu(guess);
	mainMenu->addSubMenu(exit);

	login->addSubMenu(mainMenu);
	registering->addSubMenu(mainMenu);

	Menu* logout = new Menu("Log out", "See you again", LOGOUT);
	Menu* readBookA = new Menu("Read Book", "", READ);
	Menu* readBookM = new Menu("Read Book", "", READ);
	Menu* readBookG = new Menu("Read Book", "", READ);
	Menu* searchBookA = new Menu("Search Book", "");
	Menu* searchBookM = new Menu("Search Book", "");
	Menu* searchBookG = new Menu("Search Book", "");
	Menu* byTitleA = new Menu("Search by Title", "", SEARCH_TITLE);
	Menu* byTitleM = new Menu("Search by Title", "", SEARCH_TITLE);
	Menu* byTitleG = new Menu("Search by Title", "", SEARCH_TITLE);
	Menu* bySerialA = new Menu("Search by Serial", "", SEARCH_SERIAL);
	Menu* bySerialM = new Menu("Search by Serial", "", SEARCH_SERIAL);
	Menu* bySerialG = new Menu("Search by Serial", "", SEARCH_SERIAL);

	searchBookA->addSubMenu(byTitleA);
	byTitleA->addSubMenu(searchBookA);
	searchBookA->addSubMenu(bySerialA);
	bySerialA->addSubMenu(searchBookA);

	searchBookM->addSubMenu(byTitleM);
	byTitleM->addSubMenu(searchBookM);
	searchBookM->addSubMenu(bySerialM);
	bySerialM->addSubMenu(searchBookM);

	searchBookG->addSubMenu(byTitleG);
	byTitleG->addSubMenu(searchBookG);
	searchBookG->addSubMenu(bySerialG);
	bySerialG->addSubMenu(searchBookG);

	// Menu sau khi Admin Login
	Menu* menuAdmin = new Menu("Admin's Menu", "Welcom Admin");

	Menu* addBook = new Menu("Add Book", "", ADD);
	Menu* showBook = new Menu("Show Book", "", SHOW);
	Menu* hideBook = new Menu("Hide Book", "", HIDE);
	Menu* removeBook = new Menu("Remove Book", "", REMOVE);
	Menu* editBook = new Menu("Edit Book", "", EDIT);
	Menu* manageCollection = new Menu("Manage Collection", "", MANAGE_COLLECTION);

	menuAdmin->addSubMenu(addBook);
	addBook->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(showBook);
	showBook->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(hideBook);
	hideBook->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(removeBook);
	removeBook->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(editBook);
	editBook->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(manageCollection);
	manageCollection->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(readBookA);
	readBookA->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(searchBookA);
	searchBookA->addSubMenu(menuAdmin);
	menuAdmin->addSubMenu(logout);


	// Menu sau khi Member Login
	Menu* menuMember = new Menu("Member's Menu", "Welcom Our Member");

	Menu* borrowBook = new Menu("Borrow Book", "", BORROW);
	Menu* returnBook= new Menu("Return Book", "", RETURN);
	Menu* subcribeCollection= new Menu("Subcribe Book Collection", "", SUBCRIBE);
	Menu* unsubcribeCollection= new Menu("Unsubcribe Book Collection", "", UNSUBCRIBE);

	menuMember->addSubMenu(borrowBook);
	borrowBook->addSubMenu(menuMember);
	menuMember->addSubMenu(returnBook);
	returnBook->addSubMenu(menuMember);
	menuMember->addSubMenu(subcribeCollection);
	subcribeCollection->addSubMenu(menuMember);
	menuMember->addSubMenu(unsubcribeCollection);
	unsubcribeCollection->addSubMenu(menuMember);
	menuMember->addSubMenu(readBookM);
	readBookM->addSubMenu(menuMember);
	menuMember->addSubMenu(searchBookM);
	searchBookM->addSubMenu(menuMember);
	menuMember->addSubMenu(logout);

	// Menu sau khi Login As Guess
	guess->addSubMenu(readBookG);
	readBookG->addSubMenu(guess);
	guess->addSubMenu(searchBookG);
	searchBookG->addSubMenu(guess);
	guess->addSubMenu(registering);
	guess->addSubMenu(mainMenu);
	
	logout->addSubMenu(mainMenu);

	Menu* currentMenu = mainMenu;

	bool a = true;

	while (a == true) {
		currentMenu->displayMenu();
		int choice = currentMenu->promtOption();
		currentMenu = currentMenu->getSubMenu(choice);
		switch (currentMenu->getAction()) {
		case -1:
			break;
		case LOGIN:
			//Hàm cho Login
			break;
		case REGISTER:
			//Hàm cho Register
			break;
		case GUESS:
			//Hàm cho Guess
			break;
		case ADD:
			//Hàm cho Add book
			break;
		case SHOW:
			//Hàm cho Show book
			break;
		case HIDE:
			//Hàm cho Hide book
			break;
		case EDIT:
			//Hàm cho edit book
			break;
		case REMOVE:
			//Hàm cho remove book
			break;
		case MANAGE_COLLECTION:
			//Hàm cho manage collections
			break;
		case BORROW:
			//Hàm cho borrow book
			break;
		case RETURN:
			//Hàm cho return book
			break;
		case SUBCRIBE:
			//Hàm cho subcribe book collection
			break;
		case UNSUBCRIBE:
			//Hàm cho unsubcribe book collection
			break;
		case SEARCH_TITLE:
			//Hàm cho search by title
			break;
		case SEARCH_SERIAL:
			//Hàm cho search by serial number
			break;
		case READ:
			//Hàm cho read book
			break;
		case LOGOUT:
			//Hàm cho Log out
			break;
		case EXIT:
			cout << "Bye Bye, See you again!" << endl;
			a = false;
			break;
		default:
			cout << "Invalid action!" << endl;
			break;
		}
	}

	return 0;
}