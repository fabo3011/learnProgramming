#ifndef STACK_H
#define STACK_H

class Stack{

  private:  
    //Estructura NODO que guarda un valor y un apuntador al siguiente nodo de la pila
    struct Nodo{
      int val;
      Nodo* nxt;
      Nodo(){}
      Nodo(int val, Nodo* nxt) : val(val), nxt(nxt) {}
    };
    //Apuntador que contiene la referencia al tope de la pila
    Nodo* index;  
    //Elementos en la pila
    int sz;
  
  public:
    //Constructor
    Stack();
    //Push
    void push(int value);
    //Pop
    void pop();
    //Top
    int top();
    //Size
    int size();
};

#endif
