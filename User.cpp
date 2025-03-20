#include "User.h"
using namespace std;
#pragma warning (disable: 4996)

template <typename T>
void printVector(const vector<T>& vec) {
    for (const T& item : vec) {
        cout << item << " ";
    }
    cout << endl;
}


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


ostream& operator<< (ostream& os, const User& user){
    os << "User Name: "<<user.username <<endl;
    os<<"Playlist: ";
    printVector(user.playlist);
    os<<"Current song: "<<user.playlist[user.currentSong]<<endl;
    return os;
}

ostream& operator<<(ostream& os, const User* user){
    os << *(user);
    return os;
}



