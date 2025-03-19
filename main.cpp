#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
#include "PremiumUser.h"
using namespace std;

int main() {
    vector <string> playlist = {"Song A", "Song B", "Song C","Song D","Song E"};
    RegularUser reg ("Maor", playlist);
    PremiumUser prim ("Maor", playlist);
    prim.CurrentSong();
    prim.NextSong();
    prim.CurrentSong();
    prim.SwitchShuffleMode();
    prim.CurrentSong();
    prim.NextSong();
    prim.CurrentSong();

    return 0;
}