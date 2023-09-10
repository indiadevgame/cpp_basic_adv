#include <iostream>
using namespace std;

class hack{
    private:
    int id;
    public:
    friend class f;
};

class f{
    public:
    void het(){
        cout<<"hello";
    };

};


int main(){

f fn;

fn.het();


return 0;
}