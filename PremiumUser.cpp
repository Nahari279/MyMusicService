#include "PremiumUser.h"
#include <algorithm> 
#include <random>    
using namespace std;
#pragma warning (disable: 4996)

PremiumUser::PremiumUser(const string& username, const vector<string>& NewPlaylist) : User(username, NewPlaylist) { //Constractor, using User constractor
    IsShuffleOn = false;
} 

bool PremiumUser::MySubscription() {
    cout<<"Premium User"<<endl;
    return true;
}

void PremiumUser::NextSong(){
    if (IsShuffleOn)
    {
        PremiumUser::SwitchShuffleMode();
        PremiumUser::shuffle();
    }
    User::NextSong();
    return;
}

void PremiumUser::PreviousSong(){
    if (IsShuffleOn)
    {
        PremiumUser::SwitchShuffleMode();
        PremiumUser::shuffle();
    }
    User::PreviousSong();
    return;
}

void PremiumUser::SwitchShuffleMode (){
    IsShuffleOn = IsShuffleOn ^ 1; //XOR with 1 is switch
}

void PremiumUser::shuffle(){
    random_device rd;
    mt19937 g(rd());
    std::shuffle(playlist.begin(), playlist.end(), g);
    return;
}

bool PremiumUser::GetShuffleMode(){
    return IsShuffleOn;
}