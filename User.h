#ifndef __USER_H
#define __USER_H
#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User //Abstract class
{
protected:
	string username;
	vector <string> playlist;
	int currentSong;
public:
	User(const string& username, const vector <string>& NewPlaylist); //Constractor
	virtual ~User() = default; // Destructor - MUST! (for polymorphisem - delete derived classes)

	virtual bool MySubscription() = 0; // Pure Virtual Function. Forces derived classes to implement it.
	virtual int GetCurrentSong ();
	virtual void NextSong();
	virtual void PreviousSong();
	string GetName();
	vector <string> GetPlaylist();

	// The function "operator<<" is an external function (not a method of User).
	// So, if we want to allow it to access private fields, we need to add "friend".
	// "friend" allows an external function to access private fields.

	// In every standard C++ header and source file for built-in types (e.g., int, string),
	// there is a declaration and implementation of the operator<< function specifically for that type.
	// Here, we are overloading operator<< for the User class to define how it should be printed.
	friend ostream& operator<< (ostream& os, const User& user);

//There are two overloads of the operator<< function.
// The reason for having both versions:
// - The first function is needed to define how a User object should be printed.
// - The second function is required to define how a pointer to User object should be printed. (Instead of printing the memory address of the pointer,  we want to print the actual content of the object it points to. )

	friend ostream& operator<<(ostream& os, const User* user);
};

#endif //__USER_H