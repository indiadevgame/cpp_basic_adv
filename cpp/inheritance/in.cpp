#include <iostream>
using namespace std;

class mincraft{
    public:
    string hero="sarthak";
    string heroin="rashmi";
    string pet="goldy";
};

class update1 : public mincraft{
    public:
    string version = "v19.17.0.0.0";
    string date = "3-sep-2023";
    string size = "1.15gb";
};

class newblock :  public update1 {
    public:
    string newblock_name = "goldsmooth";
    string newblock2 = "honeyblock";

};

class finalgame : public newblock {};



int main(){

finalgame min_game;
cout<<"hero name is "<<min_game.hero<<endl;
cout<<"heroin name is "<<min_game.heroin<<endl;
cout<<"pet name is "<<min_game.pet<<endl;
// 
cout<<"game update new version "<<min_game.version<<endl;
cout<<"game size is "<<min_game.size<<endl;
cout<<"game new block 1"<<min_game.newblock_name<<endl;

return 0;
}