#ifndef ITERADOR_H
#define ITERADOR_H
template <class T>
class iterador{
private:
	Node<T> *posterior;
    Node<T> *anterior;
public:
   
    iterador<T>(Node<T> *s){posterior=s;}

    
    void operator ++()
    {
        posterior=posterior->siguiente;
    }


    void next()
    {
		
        cout<<posterior->valor<<" ";
        
    }
    void operator --()
    {
        anterior=anterior->siguiente;
    }

    void operator ==(T valor)
    {
        if(posterior->valor==valor)
            cout<<"esta bien"<<endl;
        else
            cout<<"no esta igual"<<endl;

    }
    void operator !=(T valor)
    {
        if(posterior->valor!=valor)
            cout<<posterior->valor<<" es diferente de "<<valor<<endl;
        else
            cout<<"el valor es igual"<<endl;
    }

    bool recorrer()
    {
        if(posterior->siguiente !=NULL)
            return true;
        return false;
        
    }
};
#endif
