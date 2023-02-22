#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {

    private : string nit;

  public :
  Cliente(){
  }
  Cliente(string nom,string ape,string dir,string fech,int tel,string n) : Persona(nom,ape,dir,fech,tel){ 
  nit = n;
  }
  
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
  void setTelefono(int tel){telefono = tel;}

  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFecha_nacimiento(){return fecha_nacimiento;}
  int getTelefono(){	return telefono;}
  
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<"."<<telefono<<endl;
}
void crear(){
    cout<<"Has ingresado el metodo: \"crear()\"";
}
void leer(){
    cout<<"has ingresado al metodo: \"Leer()\"";

}
void actualizar(){
    cout<<"has ingresado al metodo: \"Actualizar()\""; 
}
void borrar(){
    cout<<"has ingresado al metodo: \"Borrar()\"";
}
};  