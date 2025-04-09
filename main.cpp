#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
#include "PremiumUser.h"
#include "MusicService.h"
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
    MusicService Naharis ("Naharis");
    Naharis.AddUser("Maor",playlist,true);
    Naharis.AddUser("Shirel",playlist,false);
    Naharis.ShowAllUsers();
}