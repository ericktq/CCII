#ifndef LISTA_H
#define LISTA_H
using namespace std;
template <class T>
class lista
{


public:
	Node<T> *head;
    Node<T> *actual;

    lista(){head=NULL,actual=NULL;}
    void insertar(T valor);
    void insertarpos(T valor,T pos);
    void eliminar(T pos);
    void mostrar();
	//template<class lista> friend class iterador;


};

template <class T>
void lista<T>::insertar(T v)
{
    Node<T> *nuevo=new Node<T>(v);
    if(head==NULL)
    {
        head=nuevo;
    }
    else{
        actual->siguiente=nuevo;
    }
    actual=nuevo;
}

template <class T>
void lista<T>::mostrar()
{
    Node<T> *tmp=head;
    while(tmp)
    {
        cout<<tmp->valor<<" ";
        tmp=tmp->siguiente;

    }
    cout<<endl;

}

template <class T>
void lista<T>::insertarpos(T v, T pos)
{
    Node<T> *nuevo=new Node<T>(v);
    Node<T> *tmp=head;
    if(pos==1)
    {
        nuevo->siguiente=head;
        head=nuevo;
    }
    else{
         for(int i=2;tmp!=NULL;i++){
            if(i==pos){
                nuevo->siguiente=tmp->siguiente;
                tmp->siguiente=nuevo;
            }
            tmp=tmp->siguiente;
        }
    }


}

template <class T>
void lista<T>::eliminar(T pos)
{
    Node<T> *aux=head;
    Node<T> *ant;

    for(int i=1;aux!=NULL;i++){
            if(i==pos){
                ant->siguiente=aux->siguiente;
                delete (aux);
            }

    }
}
#endif
