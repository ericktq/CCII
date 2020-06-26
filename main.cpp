#include <iostream>
#include "node.h"
#include "lista.h"
#include "iterador.h"
using namespace std;
int main()
{
    lista<int> list1;
    list1.insertar(7);
    list1.insertar(9);
    list1.insertar(16);
	list1.insertarpos(14,1);
    list1.insertarpos(84,2);
    list1.insertarpos(74,2);


    iterador<int> t1(list1.head);

    t1==5;
    t1!=14;
    while(t1.recorrer()==true){
        t1.next();
        ++t1;
    }
    cout<<endl;
	lista<char>list2;
	list2.insertar('H');
	list2.insertar('O');
	list2.insertar('L');
	list2.insertar('A');
	list2.insertar(' ');
	list2.insertar('M');
	list2.insertar('U');
	list2.insertar('N');
	list2.insertar('D');
	list2.insertar('O');
	list2.insertar('!');
	iterador<char>t2(list2.head);
	while(t2.recorrer()==true){
		t2.next();
		++t2;
	}
}
