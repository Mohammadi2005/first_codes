#include <iostream>

using namespace std;

class parvan{
private:
    string Secret;

public:
    void set_Secret( string secret ){
        Secret = secret;
    }

    string get_Secret(){
        return Secret;
    }

    string chake(){
        int i = 0;
        while(i < Secret.length() && isalpha(Secret[i]) != 0)
            i++;
        
        if ( i == Secret.length())
            return "This password is incorrect";
        i = 0;
        while(i < Secret.length() && isdigit(Secret[i]) == 1)
            i++;
        
        if ( i == Secret.length())
            return "This password is incorrect";

        return "The password is correct";
    }
};
