#include<iostream>
#include<stdlib.h>

using namespace std;

struct nodo{
	int a;
	struct nodo *b;
};

main(){
	struct nodo *finish;
	struct nodo *c;
	finish=NULL;
	int data;
	int cant;
	int i=0;
	cout<<"Ingrese cantidad de nodos"<<endl;
	cin>>cant;
	cout<<""<<endl<<endl<<endl<<endl;
	while(i<=cant){
		c=(struct nodo *)malloc(sizeof(struct nodo));//Asignando Memoria y sizeof asigna el tamaño de memeoria
		c->b=finish;
		cout<<"Ingrese el dato"<<endl;//Asignando posición del nodo
		cin>>data;
		c->a=data;
		finish=c;
		i++;
		cout<<""<<endl;
	}
	 cout << "SUS VALORES SON ORDENADOS(EL ULTIMO EL PRIMERO Y EL PRIMERO DE ULTIMO)"<<endl<<endl<<endl;
	while(c!=NULL){
		cout<<c->a<<" , ";//imprime de primero el valor ingresado de ultimo y el primero lo imprime de ultimo
		c=c->b;
	}

	while(c!=NULL){
		free(c);
		c=c->b;
	}
return 0;
}
