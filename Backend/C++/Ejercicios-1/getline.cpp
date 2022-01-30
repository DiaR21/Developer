


#include<iostream>
using namespace std;

class ClaseB{
	int x;
	public:
		ClaseB(int=10); //constructor por defecto
		
		~ClaseB(){
		}
		int getValor();
        };


int main()

{
	ClaseB b;
	cout<<b.getValor()<<"\n";
	ClaseB b2(5);
	cout<<b2.getValor()<<"\n";
	ClaseB b3=4;
	cout<<b3.getValor()<<"\n";
	return 0;
}

ClaseB::ClaseB(int z){x=z;}
int ClaseB::getValor(){return x;}
