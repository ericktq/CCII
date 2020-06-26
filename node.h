#ifndef NODE_H
#define NODE_H

template <class T>
class Node{


public:
    T valor;
    Node<T> *siguiente;
    Node<T>(T dato){valor=dato,siguiente=NULL;}
    Node<T>(){valor=NULL,siguiente=NULL;}
    


};
#endif
