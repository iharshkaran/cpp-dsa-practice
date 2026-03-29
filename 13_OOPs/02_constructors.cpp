#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name ;
    int rollNo ;
    float gpa ;
    //constructors

    Student(){ //Default Constructor
        
    }

    //Parameterized Constructor
    Student(string s , int r , float g){ 
        name = s;
        rollNo = r;
        gpa = g;
    }
    Student(string s , int r){ 
        name = s;
        rollNo = r;
    }
    Student(string s){ 
        name = s;
    }
    Student(float g, string s , int r ){ 
        name = s;
        rollNo = r;
        gpa = g;
    }
    Student(int r){ 
        rollNo = r;
    }
};
int main(){
    Student s1("Raj",54,8.5);
    Student s5(8.5,"Raj",54);

    Student s2;
    s2.name = "Dev";
    s2.rollNo = 98;
    s2.gpa = 7.7;

    Student s3("karan",77);
    s3.gpa = 8.2;

    Student s4("Rahul");
    s4.rollNo = 96;
    s4.gpa = 7.8;

    Student s6 = s1; // Deep Copy
    s6.name = "Arjun";

    Student s7(s1); //Copy Constructor - Deep Copy
    s7.rollNo = 66;

    cout<<s1.name<<" "<<s1.rollNo<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rollNo<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rollNo<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rollNo<<" "<<s4.gpa<<endl;
    cout<<s5.name<<" "<<s5.rollNo<<" "<<s5.gpa<<endl;
    cout<<s6.name<<" "<<s6.rollNo<<" "<<s6.gpa<<endl;
    cout<<s7.name<<" "<<s7.rollNo<<" "<<s7.gpa<<endl;
}