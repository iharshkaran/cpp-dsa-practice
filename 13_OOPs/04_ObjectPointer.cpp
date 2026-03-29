#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float gpa;
    Student(string name, int age, float gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

void change(Student* s){
    s->name = "Rose"; //(*s).name = "Rose"
    cout<<s->name<<endl;
}

int main() {
    Student s1("Adam",20,8.5);

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"gpa: "<<s1.gpa<<endl;
    
    cout<<"--------------"<<endl;

    Student* p = &s1;
    cout<<p->name<<endl;

    change(&s1);
    p->age = 19;
    cout<<p->age<<endl;

}