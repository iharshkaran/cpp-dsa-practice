#include<iostream>
using namespace std;
class Fraction{
public:
    int num;
    int den;

    Fraction(int num, int den){
        this->num = num;
        this->den = den;
    }

    int gcb(int a, int b){
        if(b==0) return a;
        return gcb(b,a%b);
    }

    void simplify(){
        int g = gcb(num,den);
        num /= g;
        den /= g;
    }

    Fraction operator+(Fraction x){
        int newNum = num*x.den + x.num*den;
        int newDen = den*x.den;
        Fraction result(newNum,newDen);
        result.simplify();
        return result;
    }

    Fraction operator-(Fraction x){
        int newNum = num*x.den - x.num*den;
        int newDen = den*x.den;
        Fraction result(newNum,newDen);
        result.simplify();
        return result;
    }

    Fraction operator*(Fraction x){
        int newNum = num*x.num;
        int newDen = den*x.den;
        Fraction result(newNum,newDen);
        result.simplify();
        return result;
    }

    Fraction operator/(Fraction x){
        int newNum = num*x.den;
        int newDen = den*x.num;
        Fraction result(newNum,newDen);
        result.simplify();
        return result;
    }

    

    void display(){
        cout<<num<<"/"<<den<<endl;
    }
};
int main(){
    Fraction a(2,4);
    Fraction b(1,3);

    a.display();
    b.display();
    
    Fraction sum = a + b;
    sum.display();
    Fraction sub = a - b;
    sub.display();
    Fraction mult = a * b;
    mult.display();
    Fraction div = a / b;
    div.display();

}