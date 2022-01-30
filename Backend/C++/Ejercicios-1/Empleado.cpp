#include<iostream>
#include<cstring>
using namespace std;


class Empleado{
	char *nom;
	char *calle; //****
	float salario;
	public:
		Empleado();
		~Empleado();
		void setNombre(const char*);
		char* getNombre();
		
		void setCalle(const char*); //****
		char* getCalle(); //****
};

int main()
{
	Empleado j;
    j.setNombre("Jorge Reyes");
	cout<<"El nombre :"<<j.getNombre()<<"\n";
	
	j.setCalle("San Luis"); //***
	cout<<"La calle es :"<<j.getCalle()<<"\n";//***
	
}

Empleado::Empleado(){
	nom= new char[5];
	
	calle= new char[5];//***
}

Empleado::~Empleado(){
	delete [] nom;
	delete [] calle;//***
}


void Empleado::setNombre(const char*nombre)
{
	delete [] nom;
	int n;
    n=strlen(nombre)+1;
	nom=new char[n];
	strcpy(nom, nombre);
}

char* Empleado::getNombre()
{
	return nom;
 } 
 

 //******
 
 void Empleado::setCalle(const char*cal)
{
	delete [] calle;
	int n;
    n=strlen(cal)+1;
	calle=new char[n];
	strcpy(calle, cal);
}

char* Empleado::getCalle()
{
	return calle;
 } 
 
 //****
 
 


