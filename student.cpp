#include <iostream>

using namespace std;

class student{
private:
    string Name;
    long long Id;
    int Module;
    char GPA;
    string Sertes;

public:
    student(){
        Name = " ";
        Id = 0;
        Module = 0;
        GPA = NULL;
        Sertes = " ";
    }
    void record_avreage (float number){
        if ( number <= 20 && 16 < number )
            GPA = 'A';
        else if ( number <= 16 && 12 < number )
            GPA = 'B';
        else if ( number <= 12 && 8 < number )
            GPA = 'C';
        else if ( number <= 8 && 4 < number )
            GPA = 'D';
        else 
            GPA = 'E';
    }
    int sum_mark (){
        return Module * average();
    }
    int average (){
        switch (GPA){
            case 'A':
                return 20;
                break;
            case 'B':
                return 16;
                break;
            case 'C':
                return 12;
                break;
            case 'D':
                return 8;
                break;
            case 'E':
                return 0;
        }
    }
    void set_Name ( string name ){
        Name = name;
    }
    string get_Name (){
        return Name;
    }
    void set_Id ( long long id ){
        Id = id;
    }
    long long get_Id (){
        return Id;
    }
    void set_Module ( int module){
        Module = module;
    }
    int get_Module (){
        return Module;
    }
    char get_GPA (){
        return GPA;
    }
    void set_Sertes ( string sertes ){
        Sertes = sertes;
    }
    string get_Sertes (){
        return Sertes;
    }
};
int main(){

    const int num = 3;

    student* arr = new student[num]; 

    for (int i = 0; i < num; i++){
        string name, sertes;
        long long id;
        float average;
        int module;
        cout << "plese enter the information of (name, id, module, average, sertes) student " << 1 + i << "th :" << endl;
        getline(cin, name);
        arr[i].set_Name(name);
        cin >> id;
        arr[i].set_Id(id);
        cin >> module;
        arr[i].set_Module(module);
        cin >> average;
        arr[i].record_avreage(average);
        cin.ignore();
        getline(cin, sertes);
        arr[i].set_Sertes(sertes);
    }
    for ( int i = 0; i < num; i++){
        cout << i + 1 << "_" << "information of student "<< i + 1 << "th." << endl;
        cout << " NAME : " << arr[i].get_Name() << endl;
        cout << " ID : " << arr[i].get_Id() << endl;
        cout << " MODULE : " << arr[i].get_Module() << endl;
        cout << " GPA : " << arr[i].get_GPA() << endl;
        cout << " SERTES : " << arr[i].get_Sertes() << endl;
        cout << " SUM_MARK : " << arr[i].sum_mark() << endl;
        cout << " AVERAGE : " << arr[i].average() << endl;

    }
    return 0;
}