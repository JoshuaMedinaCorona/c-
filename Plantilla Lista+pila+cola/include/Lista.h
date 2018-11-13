#ifndef LISTA_H
#define LISTA_H
#define NUM 10
#include <iostream>

using namespace std;
template <class T1>
class Lista
{
    public:
        Lista();
        bool llena();
        bool vacia();
        bool inserta(T1);
        bool inserta(T1, int);
        void mostrar(int);
        int getCont();
        T1 operator [] (int);
        int localiza(T1);
        T1 getT1(int);
        bool elimina(int);
        void ordena();


    protected:
        int cont;

    private:
        T1 lista[NUM];

};

template <class T1>
Lista<T1>::Lista(){
    cont = 0;
    for (int i = 0; i<NUM; i++){
        //lista[i] = NULL;
    }
}

template <class T1>
bool Lista<T1>::llena(){
    if (cont == NUM){
        return true;
    }
    return false;
}

template <class T1>
bool Lista<T1>::vacia(){
    if (cont == 0){
        return true;
    }
    return false;
}

template <class T1>
bool Lista<T1>::inserta(T1 dato){
    if (!llena()){
        lista[cont] = dato;
        cont ++;
        return true;
    }
    return false;
}

template <class T1>
bool Lista<T1>::inserta(T1 dato, int p){
    if (!llena()){
        if (p <= cont && p>=0){
            for (int i = cont; i>p+1; i++){
                lista[i]=lista[i-1];
            }
            lista[p] = dato;
            cont ++;
            return true;
        }
    }
    return false;
}

template <class T1>
void Lista<T1>::mostrar(int i){
    if (i < cont && i>-1)
        cout<<lista[i]<<endl;
}

template <class T1>
int Lista<T1>::getCont(){
    return cont;
}

template <class T1>
T1 Lista<T1>::operator[](int i){
    return lista[i];
}

template <class T1>
int Lista<T1>::localiza(T1 dato){
    if (cont == 0)
        return -1;
    else{
        for (int i = 0; i<cont; i++)
            if (lista[i] == dato)
                return i;
        return -1;

    }
}




template <class T1>
T1 Lista<T1>::getT1(int pos){

    return lista[pos];
}

template <class T1>
bool Lista<T1>::elimina(int pos){
    if (!vacia()){
        if(pos<cont && pos >= 0){
            for (int i = pos; i < cont-1; i++){
                lista[i] = lista[i+1];
            }
            cont--;
            return true;
        }

    }
    return false;

}



template <class T1>
void Lista<T1>::ordena(){

    if (!vacia()){
        for(int i = 1; i<cont; i++){
            T1 aux = lista[i];
            int j;
            for (j = i; j>0; j-- ){
                if (lista[j-1].compareTo(aux) == 1){
                    lista[j] = lista[j-1];
                }
                else break;
            }
            lista[j] = aux;
        }
    }
}

template <class T1>
class Cola:public Lista<T1>{
private:
    int primero;
    int ultimo;

public:
    Cola();
    bool encolar(T1);
    T1 desencolar();
    T1 frente();

};

template <class T1>
Cola<T1>::Cola(){
    primero =-1;
    ultimo = -1;
}

template <class T1>
bool Cola<T1>::encolar(T1 d){
    if (primero == -1)
        primero = 0;
    ultimo++;
    return this->inserta(d, ultimo);
}

template <class T1>
T1 Cola<T1>::desencolar(){
    T1 d = this->getT1(primero);
    this->elimina(primero);
    ultimo--;
    if (ultimo == -1)
        primero = -1;
    return d;
}

template <class T1>
T1 Cola<T1>::frente(){

        T1 d = this->getT1(primero);
        return d;
}

template <class T1>
class Pila:public Lista<T1>{
private:
    int tope;

public:
    Pila();
    bool push(T1);
    T1 pop();
    T1 top();

};

template <class T1>
Pila<T1>::Pila(){
    tope =-1;
}

template <class T1>
bool Pila<T1>::push(T1 d){
    tope++;
    return this->inserta(d,tope);

}

template <class T1>
T1 Pila<T1>::pop(){
    T1 d = this->getT1(tope);
    this->elimina(tope);
    tope--;
    return d;
}

template <class T1>
T1 Pila<T1>::top(){

        T1 d = this->getT1(tope);
        return d;
}

#endif // LISTA_H






