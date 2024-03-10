#include <iostream>

using namespace std;

class Book {
public:
    string Name;
    Book* next;

    Book(string name) {
        Name = name;
        next = nullptr;
    }
};

int main(){

    int num_Books;
    
    cin >> num_Books;
    cin.ignore();

    string fristBookname;
    getline(cin, fristBookname);
    Book* head = new Book(fristBookname);
    Book* current = head;
    Book* last = head; 

    for (int i = 1; i < num_Books; i++){

        string bookname;
        getline(cin, bookname);
        Book* newBook = new Book(bookname);

        current->next = newBook;
        current = newBook;
        last = current;
    }

    string input;
    do {
        cin >> input;
    
        if (input == "DeleteLeft" && last != nullptr){
            num_Books--;
            Book* temp = head;
            head = head->next;
            delete temp;

            if(head == nullptr)
                last = nullptr;

            continue;
        }
        
    else if (input == "AddLeft"){
        
        num_Books++;
        string bookname;
        cin.ignore(); 
        getline(cin, bookname);

        Book* newBook = new Book(bookname);
        newBook->next = head;
        head = newBook;

    continue;
}
    else if (input == "AddRight"){
        
        num_Books++;
        string bookTitle;
        cin.ignore();
        getline(cin, bookTitle);

    Book* newBook = new Book(bookTitle);
        if (head == nullptr){
            head = newBook;
            last = newBook;
        } else {
            last->next = newBook;
            last = newBook;
        }

        continue;
    }

    } while (input != "Exit");
    
        current = head;
        cout << num_Books << endl;

        while (current != nullptr){

            cout << current->Name << endl;
            current = current->next;
        }

    return 0;
}