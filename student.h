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