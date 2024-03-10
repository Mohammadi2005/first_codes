#include <iostream>

using namespace std;

int* sort(int* Arr, int n){

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (*(Arr + i) > *(Arr + j)){
                int temp = *(Arr + i);
                *(Arr + i) = *(Arr + j);
                *(Arr + j) = temp;
            }
        }
    }
    return Arr;
}

int main(){

    int number, i;
    int* arr = new int;

    cin >> number;

    for ( i = 0; i < number; i++)
        cin >> *(arr + i);

    arr = sort(arr , number);

    for ( i = 0; i < number/2; i++)
        cout << *(arr + i) << " ";

    cout << endl;

    for ( ; i < number; i++)
        cout << *(arr + i) << " ";

    delete arr;

    return 0; 
}