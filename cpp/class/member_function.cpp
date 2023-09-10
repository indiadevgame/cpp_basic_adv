#include <iostream>
using namespace std;


class game{
    public:
    void join(){
        cout<<"you are join the game"<<endl;
    };
    void exit();
    void buffer();
    void stop();
    void win();
};


void game ::exit(){
    cout<<"you are exit the game"<<endl;
};

void game ::buffer(){
    cout<<"you game is buffering"<<endl;
};

void game::stop(){
    cout<<"your game is stop"<<endl;
};

void game::win(){
    cout<<"you win the game"<<endl;

   
};


int main(){

game g;
g.win();

return 0;
}