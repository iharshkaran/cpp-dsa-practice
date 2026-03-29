#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer c1("Virat Kohli",28000);
    Cricketer c2("Rohit Sharma",19900);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;

}