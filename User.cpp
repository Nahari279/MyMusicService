#include "User.h"
using namespace std;
#pragma warning (disable: 4996)

User::User(const string& username, const vector <string>& NewPlaylist) : username(username){ //Constractor
	if (NewPlaylist.empty())
    {
        this->playlist.push_back("Default Song");
    }
    playlist = NewPlaylist;
    this->currentSong = 0;
    return;
}


int User::GetCurrentSong (){
    cout<<"Current song: "<<playlist[currentSong]<<endl;
    return currentSong;
}

void User::NextSong(){
    if (currentSong == playlist.size()) 
    {
        currentSong=0;
		return;
    }
    currentSong++;
    return;  
}

void User::PreviousSong(){
    if (currentSong == 0) 
    {
		return;
    }
    currentSong--;
    return;  
}


string User::GetName(){
    return username;
}

vector <string> User:: GetPlaylist(){
    return playlist;
}