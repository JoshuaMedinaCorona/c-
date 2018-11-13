#ifndef CLASS1_H
#define CLASS1_H

#include <string>

using namespace std;
class Class1
{
    public:
        Class1();
        Class1(int, string, char);
        virtual ~Class1();
        int getA();
        string getB();
        char getC();
        string toString();
        int compareTo(Class1);

    protected:

    private:
        int a;
        string b;
        char c;
};

#endif // CLASS1_H
