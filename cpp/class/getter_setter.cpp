#include <iostream>
using namespace std;

class game{
    // data
    private :
    int key =100;
    public:
    // simple get value
    int get(){
        return key;

    }
};


class code{
    private:
    int id ;
    public:
    // setter
    void setter(int s){
        id = s;
    }
    // getter
    int getter(){
        return id;
    }
};

int main(){

    // game g;
    // cout<<g.get();

    code hack;
    hack.setter(10002);
    cout<<hack.getter();

return 0;
}