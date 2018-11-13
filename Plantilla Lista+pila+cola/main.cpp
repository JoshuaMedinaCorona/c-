#include <iostream>
#include "Lista.h"
#include "Class1.h"


using namespace std;

int main()
{
    /*Lista<int> miLista;
    miLista.inserta(1);
    miLista.inserta(10);
    miLista.inserta(100);
    miLista.inserta(1000);

    miLista.mostrar(0);
    miLista.mostrar(1);
    miLista.mostrar(2);
    miLista.mostrar(3);

    Lista<char> miLista2;
    miLista2.inserta('a');
    miLista2.inserta('s');
    miLista2.inserta('d');
    miLista2.inserta('f');

    miLista2.mostrar(0);
    miLista2.mostrar(1);
    miLista2.mostrar(2);
    miLista2.mostrar(3);
    */

    /*
    Lista<Class1> listaClass1;
    Class1 obj1(1,"uno",'a');
    Class1 obj2(2,"uno",'b');
    Class1 obj3(3,"uno",'c');
    Class1 obj4(4,"uno",'d');
    Class1 obj5(5,"uno",'e');

    listaClass1.inserta(obj1);
    listaClass1.inserta(obj2);
    listaClass1.inserta(obj3);
    listaClass1.inserta(obj4);
    listaClass1.inserta(obj5);

    for (int i = 0; i < listaClass1.getCont(); i++)
        cout<<listaClass1[i].toString()<<endl;
    listaClass1.localiza(obj1);
    cout << "Hello world!" << endl;
    */

    /*
    Pila<Class1>  miPila;
    Class1 obj1(1,"uno",'a');
    Class1 obj2(2,"uno",'b');
    Class1 obj3(3,"uno",'c');
    Class1 obj4(4,"uno",'d');
    Class1 obj5(5,"uno",'e');
    miPila.push(obj1);
    miPila.push(obj2);
    miPila.push(obj3);

    Class1 obj10 = miPila.pop();
    cout<<obj10.toString();
    miPila.push(obj4);
    miPila.push(obj5);
    obj10 = miPila.pop();
    cout<<obj10.toString();

    */

    /*
    Cola<Class1>  miFila;
    Class1 obj1(1,"uno",'a');
    Class1 obj2(2,"uno",'b');
    Class1 obj3(3,"uno",'c');
    Class1 obj4(4,"uno",'d');
    Class1 obj5(5,"uno",'e');
    miFila.encolar(obj1);
    miFila.encolar(obj2);
    miFila.encolar(obj3);

    Class1 obj10 = miFila.desencolar();
    cout<<obj10.toString()<<endl;
    miFila.encolar(obj4);
    miFila.encolar(obj5);
    obj10 = miFila.desencolar();
    cout<<obj10.toString();

    */

    /*
    Lista<int> miLista;

    for (int i = 10;i>=1;i--){
        miLista.inserta(i);

    }
    miLista.ordena();
    for (int i = 0;i<=10;i++){
        miLista.mostrar(i);
        //cout<<"prueba"<<endl;
    }
    */


    Lista<Class1> listaClass1;
    Class1 obj1(6,"uno",'a');
    Class1 obj2(2,"uno",'b');
    Class1 obj3(8,"uno",'c');
    Class1 obj4(19,"uno",'d');
    Class1 obj5(5,"uno",'e');

    listaClass1.inserta(obj1);
    listaClass1.inserta(obj2);
    listaClass1.inserta(obj3);
    listaClass1.inserta(obj4);
    listaClass1.inserta(obj5);

    listaClass1.ordena();

    for (int i = 0; i < listaClass1.getCont(); i++)
        cout<<listaClass1[i].toString()<<endl;



    return 0;
}
