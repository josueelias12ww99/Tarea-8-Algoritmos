#include "cliente.cpp"
#include <iostream>
using namespace std;

main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit:";
	cin>>nit;
	cout<<"Ingrese Nombres:";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Direccion:";
	cin>>direccion;
	
	Cliente obj = Cliente (nombres, apellidos, direccion, telefono, nit);
	obj.mostrar(); 
	
	cout<<"Datos del Cliente:"<<onj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
	cout<<"Ingrese Nit:";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	cout<<obj.getNit();
	
}
	
