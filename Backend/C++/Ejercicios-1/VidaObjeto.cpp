

#include<iostream>
using namespace std;

class VidaObjeto{
	public: 
	VidaObjeto();
	~VidaObjeto();
};

int main()
{
	int z;
	VidaObjeto j;
	cout<<"Pulce una tecla\n";
cin>>z;
}

VidaObjeto::VidaObjeto(){
	cout<<"Ya naci \n"; 
}


VidaObjeto::~VidaObjeto(){
	cout<<"Ya mori \n"; 
}
