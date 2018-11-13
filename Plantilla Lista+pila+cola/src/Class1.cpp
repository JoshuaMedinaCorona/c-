#include "Class1.h"
#include <sstream>

Class1::Class1()
{
    //ctor
}

Class1::Class1(int a, string b, char c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

string Class1::toString(){
    stringstream ss;
    ss<<a;
    string cad = ss.str() + " "+ b+" "+c;
    return cad;
}

int Class1::compareTo(Class1 obj2){
    int x;
    if(this->a>obj2.a)
        x = 1;
    else if (this->a == obj2.a)
        x=0;
    else
        x = -1;
    return x;

}



Class1::~Class1()
{
    //dtor
}

int Class1::getA()
{
    return this->a;
}

string Class1::getB()
{
    return b;
}

char Class1::getC()
{
    return c;
}
