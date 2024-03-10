#include <iostream>
#include <vector>

using namespace std;

void faind( vector<vector<int>>& arr, int n, int place1, int place2, int *y, int *x) {
   int place1_x , place1_y , place2_x , place2_y ;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == place1) {
                place1_x = j;
                place1_y = i;
            }
            if (arr[i][j] == place2) {
                place2_x = j;
                place2_y = i;
            }
        }
    }
    *x = place1_x - place2_x;
    *y = place1_y - place2_y;
}
int main() {

    int length, kiynn, candle, number = 1, i = 0, j = 0, k = 0;
    
    cin >> length >> kiynn >> candle;

    vector<vector<int>> room(length, vector<int>(length));

    while (number <= length * length) {
        for (j = k; j < length - k; j++) {
            room[i][j] = number;
            number++;
        }
        j--;

        for (i = k + 1; i < length - k; i++) {
            room[i][j] = number;
            number++;
        }
        i--;

        for (j = length - k - 2; j >= k; j--) {
            room[i][j] = number;
            number++;
        }
        j++;

        for (i = length - k - 2; i > k; i--) {
            room[i][j] = number;
            number++;
        }
        i++;

        k++;
    }
    
    int delta_x,delta_y;
    
    faind(room,length,kiynn,candle,&delta_y,&delta_x);
    
    if(delta_x > 0)
        cout << delta_x << " " << "L\n";
    
    else if(delta_x < 0){
        delta_x *= -1;
        cout << delta_x << " " << "R\n";
    }    
    if(delta_y > 0) 
        cout << delta_y << " " << "D\n";
    
    else if(delta_y < 0){
        delta_y *= -1;
        cout << delta_y << " " << "U\n";
        }
        
    else if(delta_y < 0){
        delta_y *= -1;
        cout << delta_y << " " << "U\n";
        }

    return 0;
}