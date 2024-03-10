#include <iostream>


using namespace std;

void swap_char( char *a , char *b){
    char temp_char = *a;
    *a = *b;
    *b = temp_char;
}

int main(){

    string secret;

    cin >> secret;

    for (int i = 0; i < secret.length()-1; i = i + 2)
        swap_char( &secret[i], &secret[i+1]);

    for (int i = 0; i < secret.length(); i++){
        int a = 97 + ( 122 - tolower(secret[i]));
        secret[i] = char(tolower(a));
    }

    cout << secret;
}