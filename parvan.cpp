#include <iostream>
#include "parvan.h"

using namespace std;

int main(){

    int num_secret;
    cout << "Plese enter the number of passwords :";
    cin >> num_secret;

    parvan *arr = new parvan[num_secret];

    for ( int i = 0; i < num_secret; i++){
        string temp;
        cout << "Plese enter password " << i + 1 << " th: ";
        cin >> temp;
        arr[i].set_Secret(temp);
    }

    for ( int i = 0; i < num_secret; i++){
        cout << arr[i].chake() << endl;
    }

    return 0;
}
