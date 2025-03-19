#include "User.h"
using namespace std;
#pragma warning (disable: 4996)

User::User(const string& username, const vector <string>& playlist) : username(username), playlist(playlist) { //Constractor
	this->currentSong = 0;
    return;
}

void User::playSong(){
	if (playlist.size()==0)
    {
        cout<<"Playlist is empty."<< endl;
		return;
    }
    if (currentSong == playlist.size()) 
    {
        currentSong=0;
        cout<<"Replay."<<endl;
		cout<<"Current song: "<<playlist[currentSong]<<endl;
		return;
    }
	cout<<"Current song: "<<playlist[currentSong]<<endl;
    currentSong++;
    return;
}