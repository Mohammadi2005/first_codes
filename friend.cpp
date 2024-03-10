#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num_computer, num_band ;

    cin >> num_computer >> num_band;

    vector<int> computer(num_computer,0);
    vector<int> friends(num_band);
    vector<int> chairs(num_band);

    for (int i = 0; i < num_band; i++)
        cin >> chairs[i] >> friends[i];

    for (int i = 0; i < num_band; i++){
 
        for (int j = -1; j < friends[i]-1 && friends[i] + chairs[i] <= 1 + num_computer;j++){

            if (computer[chairs[i] + j] == 0)
                computer[chairs[i] + j] = 1;
    
            else if(computer[chairs[i] + j] == 1){

                j--;

                for(;j >= -1;j--)
                    computer[chairs[i] + j] = 0;

                chairs[i]++;
            }
        }

    for (int k = 0; k < num_computer; k++)
        cout << computer[k] << " ";
    
    cout << endl;
    }
    return 0;
    }