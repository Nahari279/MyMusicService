#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
#include "PremiumUser.h"
using namespace std;

int main() {
    vector <string> playlist = {"Song A", "Song B", "Song C"};
    RegularUser reg("Maor", playlist);
    PremiumUser prim("Maor", playlist);
    prim.mySubscription();
    cout<<prim.getName()<<endl;
    prim.shuffle();
    prim.playSong();
    prim.playSong();
    return 0;
}