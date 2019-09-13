#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct nodos{
	int valor;
	nodos *ptr;
}nodo;


int main(int argc, char** argv) {
	nodos n1,n2,n3,n4,n5;
	n1.valor=3;
	n1.ptr=NULL;
	n2.valor=7;
	n2.ptr=NULL;
	n3.valor=9;
	n3.ptr=NULL;
	n4.valor=12;
	n4.ptr=NULL;
	n5.valor=15;
	n5.ptr=NULL;
	n1.ptr=&n2;
	n2.ptr=&n3;
	n3.ptr=&n4;
	n4.ptr=&n5;
	cout<<n1.valor<<endl;
	cout<<n1.ptr->valor<<endl;
	cout<<n1.ptr->ptr->valor<<endl;
	cout<<n1.ptr->ptr->ptr->valor<<endl;
	cout<<n1.ptr->ptr->ptr->ptr->valor<<endl;
	
	return 0;
}
