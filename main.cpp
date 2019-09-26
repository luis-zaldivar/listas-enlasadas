#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct nodos{
	int valor;
	nodos *ptr;
}*lista=NULL;


void agregar(int dato);
void imprimir();


int main(int argc, char** argv) {
	
	int op=1,nu,dato;
	while(op!=3){

	cout<<"..::MENU::..";
	cout<<"\n1.agregar\n2.imprimir\n3.salir \n";
	cin>>op;
	if (op==1){
		cout<<"funcion agregar\ncuantos nodos desea: ";
		cin>>nu;
		for (int i=0;i<nu;i++){
			cout<<"inserte un valor para el nodo "<<i+1<<": ";
			cin>>dato;
		agregar( dato);
	    }
//		agregar(nu,nodos *lista,dato);
		
	}
	 if(op==2){
		cout<<"funcion imprimir\n";
		imprimir();
	}
}
	return 0;
	}
	
	



//funcion agregar
void agregar(int dato){
    nodos *nuevo=new nodos;
    nuevo->ptr=NULL;
    nuevo->valor=dato;
    if(lista==NULL)
        lista=nuevo;
    else{
        nodos *aux=lista;
        while(aux->ptr!=NULL){
                aux=aux->ptr;
    }aux->ptr=nuevo;
    }
}
	//cin>>rep;
	//while (rep==1){
	//	cin>>opcion;
	//	if (opcion==1){
	//		cin>>dato;
	//		agregar(lista,dato);
	//	}
	//}
void imprimir(){
    nodos *aux=lista;
    while(aux!=NULL){
            cout<<aux->valor<<'\n';
            aux=aux->ptr;
    }
    }
