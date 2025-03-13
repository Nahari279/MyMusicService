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
	virtual ~User() = default; // Destructor - MUST! (for polymorphisem)
	virtual void playSong();
};

#endif //__USER_H