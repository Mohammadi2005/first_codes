#include <iostream>

using namespace std;

class MyBook{
public:
    string Name;
    MyBook* next;

    MyBook(string name){

        Name = name;
        next = nullptr;
    }
};

int main(){

    int number_books;

    cout << "enter number Books : ";

    cin >> number_books;

    MyBook* fale = nullptr;
    MyBook* sar = nullptr;

    for (int i = 0; i <= number_books; i++){
        
        string Name_Book;
        if (i != 0)
            cout << "Enter name book " << i << ":";

        getline( cin, Name_Book);

            sar = new MyBook(Name_Book);
            fale = sar;
        //    MyBook* akar = fale;

        if ( i != 0){

            MyBook* gaded = new MyBook(Name_Book);
            fale = gaded;
        //    akar = fale;
        }
    }
     
    //fale = sar;

    while ( fale != nullptr){

        cout << fale->Name << endl;
        fale = fale->next;
    }
    return 0;
}