#include <iostream>

using namespace std;

int main(){

    int number_player;
     string name_winner;

     cin >> name_winner;
     cin >> number_player;

     string name_player[number_player];

     for (int i = 0; i < number_player; i++)
         cin >> name_player[i];

     for (int i = 0; i < number_player; i++){

         if (name_winner.length() == name_player[i].length()){

             int j = 0;
             while (name_winner.length() > j && (name_player[i][j] == '?' || name_winner[j] == name_player[i][j]))
                 j++;

            if (j == name_winner.length()){
                cout << "The winner is the " << i + 1 << "th player of the list";
                return 0;
             }
         }
     }
     cout << "The winner was not in the input list";
     return 0;
}