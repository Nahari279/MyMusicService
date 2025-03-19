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
	User(const string& username, const vector <string>& playlist); //Constractor
	virtual ~User() = default; // Destructor - MUST! (for polymorphisem - delete derived classes)
	virtual void mySubscription() = 0; // Pure Virtual Function. Forces derived classes to implement it.
	virtual void playSong();
	string getName();
};

#endif //__USER_H