#include <iostream>
#include "student.h"

using namespace std;

int main(){

    const int num = 1;

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