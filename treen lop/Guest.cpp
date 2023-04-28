#include "Guest.h"

Guest::Guest()
{
	id = 0;
}

Guest::Guest(int id)
{
	this->id = id;
}

void Guest::registering()
{
	cout << "Guest::registering successfully" << endl;
}

//void Guest::read(Book &b)
//{
//	cout << "Guest::read successfully" << endl;
//}

Guest::~Guest()
{
}
