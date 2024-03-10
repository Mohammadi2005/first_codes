#include <iostream>

using namespace std;

class circle {
public:
    float Radius;
public:
    circle ( float r = 0){
        Radius = r;
    }

    void Area (){
        cout << 3.14 * Radius * Radius; 
    }

    void Ambient (){
        cout << 2 * 3.14 * Radius;
    }

    float compar ( float cir1, float cir2 ){
        if ( cir1 > cir2 )
            return cir1;
        else 
            return cir2;
            
    }
};

int main(){

    int num_circle;

    cin >> num_circle;

    circle* arr = new circle[num_circle];

    for (int i = 0; i < num_circle; i++){
        float radius;
        cin >> radius;
        arr[i].Radius = radius;
    }

    for (int i = 0; i < num_circle; i++){
        arr[i].Area();
        cout << endl;
        arr[i].Ambient(); 
        cout << endl;
    }

    for (int i = 0; i < num_circle - 1; i++){
        for (int j = i + 1; j < num_circle; j++){
            cout << arr[i].compar(arr[i].Radius, arr[j].Radius) << endl;
        }
    }
    return 0;
}
