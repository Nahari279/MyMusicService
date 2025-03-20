#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
#include "PremiumUser.h"
using namespace std;

template <typename T>
void printVector(const vector<T>& vec) {
    for (const T& item : vec) {
        cout << item << " ";
    }
    cout << endl;
}


int main() {
    vector <string> playlist = {"Song A", "Song B", "Song C","Song D","Song E"};
    RegularUser reg ("Maor", playlist);
    PremiumUser prim ("Maor", playlist);
    prim.GetCurrentSong();
    prim.NextSong();
    prim.GetCurrentSong();
    prim.SwitchShuffleMode();
    prim.GetCurrentSong();
    vector <string> CurrentPlaylist = prim.GetPlaylist();
    printVector(CurrentPlaylist);
    prim.NextSong();
    prim.GetCurrentSong();
    CurrentPlaylist = prim.GetPlaylist();
    printVector(CurrentPlaylist);

    return 0;
}