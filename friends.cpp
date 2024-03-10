#include <iostream>

using namespace std;

int main(){

    int n, m;
    
    cin >> n >> m;

    int computer[n] = 0, friends[m], chairs[m];

    for (int i = 0; i < m; i++){
        cin >> friends[i] >> chairs[i] ;
    }

        for (int i = 0; i < m; i++){
        cout << friends[i] << chairs[i] << endl;
    }

    return 0;

}