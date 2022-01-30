#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

unsigned long int a= 630360016;
unsigned long int m= 2147483647;
unsigned long int s=1;
 
vector<unsigned long int> v={1,1973272912, 281629770, 20006270, 1280689831, 2096730329, 1933576050, 913566091,
			     246780520, 1363774876, 604901985, 1511192140, 1259851944, 824064364, 150493284,
			     242708531, 75253171, 1964472944, 1202299975, 233217322, 1911216000, 726370533,
			     403498145, 993232223, 1103205531, 762430696, 1922803170, 1385516923, 76271663,
			     413682397, 726466604, 336157058, 1432650381, 1120463904, 595778810, 877722890,
			     1046574445, 68911991, 2088367019, 748545416, 622401386, 2122378830, 640690903,
			     1774806513, 2132545692, 2079249579, 78130110, 852776735, 1187867272, 1351423507,
			     1645973084, 1997049139, 922510944, 2045512870, 898585771, 243649545, 1004818771,
			     773686062, 403188473, 372279877, 1901633463, 498067494, 2087759558, 493157915,
			     59710427, 153090798, 1814496276, 536444882, 1663153658, 855503735, 67784357,
			     1432404475, 619691088, 119025595, 880802310, 176192644, 1116780070, 277854671,
			     1366580350, 1142483975, 2026948561, 1053920743, 786262391, 1792203830, 1494667770,
			     1923011392, 1433700034, 1244184613, 1147297105, 539712780, 1545929719, 190641742,
			     1645390429, 264907697, 620389253, 1502074852, 927711160, 364849192, 2049576050,
			     638580085, 547070247};
void randomize()
{
  s=v[int( time(NULL) )%int( v.size() )];
}
 
double U()
{
  static unsigned long int z=s;
  z*=a;
  z%=m;
  if( z==0 )
    return 1.0/m;
  return double(z)/m;
}

double Uniforme( double a=0, double b=1 )
{
  return (b-a)*U()+a;
}

int Dado()
{
  return 6*Uniforme()+1;
}

int main()
{
  randomize();
  int DineroGanado=0;
  int numVolados;
  cout.precision(16);
  cout<<"Numero de lanzamientos de desea hacer: ";
  cin>>numVolados;
  time_t tf;
  time_t t0 = clock();
  for( int i=0; i<numVolados; i++ )
    {
      if( Dado()==1 )
	DineroGanado++;
      else
	DineroGanado--;
    }
  if (DineroGanado<0){
       cout<<"En "<<numVolados<<" lanzamientos, usted debe: "<<DineroGanado<<endl;
  }    
      if (DineroGanado>=0){
       cout<<"En "<<numVolados<<" lanzamientos, usted gano :"<<DineroGanado<<endl;
  }  
  tf=clock();
 
 // cout<<"Dinero ganado en "<<numVolados<<" volados fue "<<DineroGanado<<endl;
  cout<<"Enlapsed time : "<<double(tf-t0)/CLOCKS_PER_SEC<<endl;
}
