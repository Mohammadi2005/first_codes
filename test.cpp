#include <iostream>

using namespace std;

int main(){

string secret;

cin >> secret ;

if (secret.find("But") < 100)
    secret = secret.erase(0, secret.find("But") + 3);

secret = secret.erase(0, secret.find("Attack") + 6);

if (secret.find("Attack") < 100)
    secret = secret.erase(0, secret.find("Attack") + 6);    

int i = 0;

while( isdigit(secret[i]) == 1)
    i++;

cout << secret.substr
(0, i);

return 0;
}