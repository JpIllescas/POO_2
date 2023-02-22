#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona {

    private : string codigo_empleado, puesto;

  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string dir,string fech,int tel,string codi,string pues) : Persona(nom,ape,dir,fech,tel){ 
  codigo_empleado = codi;
  puesto = pues;
  }
  
  void setCodigo_empleado(string codi){codigo_empleado = codi;}
  void setPuesto(string pues){puesto = pues;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha_nacimiento(string fech){fecha_nacimiento = fech;}
  void setTelefono(int tel){telefono = tel;}

  string getCodigo_empleado(){	return codigo_empleado;}
  string getPuesto(){ return puesto;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  string getFecha_nacimiento(){return fecha_nacimiento;}
  int getTelefono(){	return telefono;}
  
void mostrar(){
	cout<<"______________________"<<endl;
	cout<<codigo_empleado<<","<<puesto<<"."<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<"."<<telefono<<endl;
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