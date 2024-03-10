#include <iostream>

using namespace std;

void swap( int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int number;

    cin >> number;

    int list[number];
    
    for (int i = 0; i < number; i++)
        cin >> list[i];

    
    for (int i = 0;  i < number; i++)
        cout << list[i] << " ";
     

    for (int i = 0; i < number - 1; i++){
        for (int j = i + 1; j < number; j++){
            if (list[j] < list[i])
                swap (list[i], list[j]);
        }
    }

    for (int i = 0;  i < number; i++)
        cout << list[i] << " ";
     
    return 0;
}