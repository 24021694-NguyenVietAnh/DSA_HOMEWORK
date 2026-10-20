#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> listData;

    listData.push_back(10);
    listData.push_back(20);
    listData.push_back(30);
    listData.push_back(40);
    cout << "List elements: ";
    for (int num : listData) {
        cout << " " << num;
    }
    cout << endl;
    return 0;
}

//Time Complexion: O(N)
//Auxiliary Space: O(N)