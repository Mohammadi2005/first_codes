#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int score; 
int const width = 30, height = 30;
bool gameOver;

struct point{
    int x,y;
};

point snake , fruit;
point tail[400];
int n_tail;

enum direction {STOP = 0, LEFT, RIGHT, UP, DOWN};
direction dir;

void setup(){

    snake.x = width / 2; 
    snake.y = height / 2;

    fruit.x = rand() % (width - 2) + 1;
    fruit.y = rand() % (height - 2) + 1;

    gameOver = false;
    score = 0;

    dir = STOP;

    n_tail = 0;
}

void draw(){

    system ("cls");

    int i,j;
    for(i = 0 ; i < width ; i++)
        cout<<" *";
    cout<<endl;

    for(i = 0 ; i < height ; i++){
        for(j = 0 ; j < width ; j++){
            if( j == 0 || j == width - 1)
                cout<<" *";
            else if(j == snake.x && i == snake.y)
                cout<<" O";
            else if(j == fruit.x && i == fruit.y)
                cout<<" $";
            else{

                bool flag = false;

                for(int k = 0; k < n_tail; k++)
                    if(j == tail[k].x && i == tail[k].y){
                        cout<<" o";
                        flag = true;
                    }
                if(!flag) 
                    cout<<"  ";
            }
           
        }
        
    cout<<endl;
    }
    for(i = 0 ; i < width ; i++){
        cout<<" *";
    }

    cout<<"\n SCORE : " << score;
}

void input(){

    if(kbhit()){

        switch (getche()){

        case 'w':
            dir = UP;
            break;

        case 'd':
            dir = RIGHT;
            break;

        case 's': 
            dir = DOWN;
            break;

        case 'a':
            dir = LEFT;
            break;
        
        default:
            break;
        }
    }

}

void logic(){

    for ( int i = n_tail-1; i >= 1; i--){
        tail[i].x = tail[i-1].x;
        tail[i].y = tail[i-1].y;
    }

    tail[0].x = snake.x;
    tail[0].y = snake.y;

    switch(dir){

    case LEFT:
        snake.x = (snake.x - 1 + width) % width;
        break;

    case UP:
        snake.y = (snake.y - 1 + height) % height;
        break;

    case RIGHT:
        snake.x = (snake.x + 1) % width;
        break;

    case DOWN:
        snake.y = (snake.y + 1) % height;
        break;

    default:
    break;
    }

    for(int k = 0; k < n_tail; k++)
        if(snake.x == tail[k].x && snake.y == tail[k].y){
            gameOver = true;
            system("cls");
            cout<< " GAMEOVER ";
        }

    if ( snake.x == fruit.x && snake.y == fruit.y ){
        score++;

        fruit.x = rand() % (width - 2) + 1;
        fruit.y = rand() % (height - 2) + 1;

        n_tail++;
    }
}

int main(){

    srand( time (NULL));

    setup();

    while(!gameOver){
        draw();
        input();
        logic();

        Sleep(200);
    }

    getch();
    return 0;
}