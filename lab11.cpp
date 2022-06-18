/*
//EJERCICIO 1
#include <iostream>
using namespace std;
class Nodo {
public:
Nodo(int,Nodo * =NULL);
friend class Lista;
private:
int valor;
Nodo *sig;
};

Nodo::Nodo(int v,Nodo *s)
{
valor = v;
sig =s;
}

class Lista {

public:
Lista();
~Lista();
void insertarUltimo(int);
void sacar_elemento(int);
void buscar_elemento(int);
void imprimir();
private:
Nodo* cabeza;
};
Lista::Lista() {
cabeza = NULL;
}
Lista::~Lista()
{
Nodo *temp = cabeza;
Nodo *borrar;
while(temp != NULL)
{
borrar = temp;
temp = temp->sig;

delete borrar;
}
cabeza = NULL;
}


void Lista::insertarUltimo(int v)
{
Nodo *nuevo = new Nodo(v);
if(cabeza == NULL)
{
cabeza = nuevo;
}
else{
Nodo *aux = cabeza;
while(aux->sig !=NULL)
{
aux=aux->sig;
}
aux->sig=nuevo;
}

}



void Lista::imprimir()
{
Nodo *temp = cabeza;
while(temp!=NULL)
{
cout << temp->valor << "-";
temp = temp->sig;
}
cout << "\n";
}


int main(int argc, char *argv[])
{
Lista *listaA;


listaA = new Lista();



listaA->insertarUltimo(1);
listaA->insertarUltimo(2);
listaA->insertarUltimo(3);
listaA->insertarUltimo(4);
listaA->insertarUltimo(5);

listaA->imprimir();



delete listaA;

return 0;
}



*/




/*

//EJERCICIO 3
#include <iostream>
using namespace std;
class Nodo {
public:
Nodo(int,Nodo * =NULL);
friend class Lista;
private:
int valor;
Nodo *sig;
};

Nodo::Nodo(int v,Nodo *s)
{
valor = v;
sig =s;
}

class Lista {

public:
Lista();
~Lista();
void insertarUltimo(int);
void sacar_elemento(int);
void buscar_elemento(int);
void imprimir();
private:
Nodo* cabeza;
};
Lista::Lista() {
cabeza = NULL;
}
Lista::~Lista()
{
Nodo *temp = cabeza;
Nodo *borrar;
while(temp != NULL)
{
borrar = temp;
temp = temp->sig;

delete borrar;
}
cabeza = NULL;
}


void Lista::insertarUltimo(int v)
{
Nodo *nuevo = new Nodo(v);
if(cabeza == NULL)
{
cabeza = nuevo;
}
else{
Nodo *aux = cabeza;
while(aux->sig !=NULL)
{
aux=aux->sig;
}
aux->sig=nuevo;
}

}


void Lista::buscar_elemento(int v)
{
Nodo *temp = cabeza;

if(temp->valor == v){
cout<<"si esta "<<endl;
}
else{

while(temp != NULL){
temp=temp->sig;
if(temp->valor == v){
cout<<"si esta";
}

}
}
}


void Lista::imprimir()
{
	Nodo *temp = cabeza;
	while(temp!=NULL)
	{
		cout << temp->valor << "-";
		temp = temp->sig;
	}
	cout << "\n";
}


int main(int argc, char *argv[])
{
	Lista *listaA;
	
	
	listaA = new Lista();
	
	
	
	listaA->insertarUltimo(1);
	listaA->insertarUltimo(2);
	listaA->insertarUltimo(3);
	listaA->insertarUltimo(4);
	listaA->insertarUltimo(5);
	
	listaA->imprimir();
	//listaA->sacar_elemento(1);
	listaA->buscar_elemento(1);
	
	//listaA->imprimir();
	
	
	delete listaA;
	
	return 0;
}


*/

/*

//problema 4
#include <iostream>
using namespace std;

void movimi(int dis,int tor1 , int tor2, int tor3){
	if(dis==1){
		cout<<"Mover disco de la torre "<<tor1<<" hacia "<<tor3<<endl;
	}else{
		movimi(dis-1,tor1,tor3,tor2);
		cout<<"Mover disco de la torre "<<tor1<<" hacia "<<tor3<<endl;
		movimi(dis-1,tor2,tor1,tor3);
	}
}
int main(){
	
	int tor1=1,tor2=2,tor3=3,dic=0;
	cout<<"con cuantos dicos desea jugar "<<endl;
	cin>>dic;
	movimi(dic,tor1,tor2,tor3);
	
	return 0 ;
}
*/
