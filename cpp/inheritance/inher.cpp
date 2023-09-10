#include <iostream>
using namespace std;

class a{
    public:
    int id =10;
};

class ab {
    public : 
    string name = "sarthak";
};

class x{
    public :
    float height = 6.10;
};

class b : public a , public ab , public x{};

int main(){

b ab;
cout<<ab.id<<endl;
cout<<ab.name<<endl;
cout<<ab.height<<endl;

return 0;
}