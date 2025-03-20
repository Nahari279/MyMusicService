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
};

#endif //__USER_H