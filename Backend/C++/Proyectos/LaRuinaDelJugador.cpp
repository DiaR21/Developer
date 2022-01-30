#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<cmath>
#include <fstream> //para archivos 
using namespace std;
unsigned long int a= 630360016;
unsigned long int m= 2147483647;
unsigned long int s=1;
vector<unsigned long int> v={1, 
1973272912, 281629770, 20006270, 1280689831, 2096730329, 1933576050, 913566091, 
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

double Uniforme()
 {
  static unsigned long int z=s;
  z*=a;
  z%=m;
  if( z==0 )
  return 1.0/m;
  return double(z)/m;
 }                           

main()
{
    time_t tf; //**
    time_t t0 = clock();  //**
    randomize();  //**   
      
      cout<<"\nLa Ruina del Jugador "<<endl;
      int n=30,i, j=1,a=0,b=2, monto=10000,part,n1=0,n2=0,t,h=0,ha=0; 
       int c1=0,c2=0,c3=0;
       int j1[monto],j2[monto],p1[n],p2[n];
      cout<<"Monto:"<<endl;
      cin>>monto;
      cout<<"Numero de partidas:"<<endl;
      cin>>n;
     
      cout<<"-*-*-*-*-*-*-"<<endl;   
      int m=monto;
      monto=monto*2;// se duplican los turnos ya que son jugadores 
      
      for( i=0;i<monto;i++) // llenado de arreglo
     {
          j1[i]=0;  //cout<<"j1["<<i<<"]="<<j1[i]<<endl;
          j2[i]=0;  //cout<<"j2["<<i<<"]="<<j2[i]<<endl;  
     }
        for( i=0;i<n+1;i++) // llenado de arreglo para partidas ganadas 
     {
          
          p1[i]=0;
          p2[i]=0;
     }
         
     for( i=0;i<n;i++)// numero de partidas
     { 
        // cout<<i<<endl;
          j1[0]=(m);// monto con el que ambos inician
          j2[0]=(m);
          ha=0;
          for ( j=0;j<monto+1;j++) // numero de tiradas 
          {
            t=(b-a)*Uniforme()+a;  // aqui se realiza una por una las partidas
            if (t<1)
              {
               t=- 1; 
              } 
             else 
             {
              t=1; 
             }
          j1[j+1]=t+ j1[j];
          j2[j+1]=- 1*t+j2[j];
          ha=j+1;
         //cout<<"t           "<<t<<"        t      "<<-1*t<<endl; 
         // cout<<"    j1["<<j+1<<"]="<<j1[j+1]<<"    j2["<<j+1<<"]="<<j2[j+1]<<endl; //cuanto a ganado 
         }
     
         h=i+1;
      //  cout<<h<<"++++\n";
        if( j2[ha]>j1[ha] )
        {
         
           c2++;
           p2[h]=p2[h-1]+1;
            p1[h]=p1[h-1]-1;
            
             // cout<<"2>1  "<<c2<<"  estado j2="<<p2[h]<<"  "<<"  estado j1="<<p1[h]<<"\n";
       }
      if(j2[ha]<j1[ha])
       {
           
           c1++;
          p1[h]=p1[h-1]+1;
           p2[h]=p2[h-1]-1;
           //cout<<"2<1  "<<c1<<"  estado j2="<<p2[h]<<"  "<<"  estado j1="<<p1[h]<<"\n";
       }
     if(j2[ha]==j1[ha])
       {
          //cout<<"EMPATE"<<endl;
          c3++;
          p2[h]=p2[h-1];
          p1[h]=p1[h-1];
         // cout<<"2=1  "<<c3<<"  estado j2="<<p2[h]<<"  "<<"  estado j1="<<p1[h]<<"\n";
       }    
       //cout<<"partida "<<h<<"  estado j1="<<p1[h]<<"  estado j2="<<p2[h]<<"\n";
     }
     
      //cout<<n<<"---";
     
 cout<<"JUGADOR 1 GANA EN "<<c1<<"  PARTIDAS DE "<<n<<endl;  
 cout<<"JUGADOR 2 GANE EN "<<c2<<"  PARTIDAS DE "<<n<<endl;  
 cout<<"EMPATAN EN "<<c3<<"  PARTIDAS DE "<<n<<"****"<<endl;  
 
      if( c1>c2 )
       {
           cout<<"****GANA JUGADOR 1 CON "<<c1<<"****"<<endl;
           
       }
      if(c1<c2)
       {
           cout<<"****GANA JUGADOR 2 CON "<<c2<<"****"<<endl;
          
       }
     if(c1==c2)
       {
          cout<<"****EMPATE****"<<endl;
          
       }  
      
 // crear archivo de texto 
 	ofstream archivo1, archivo2;
 	archivo1.open("jugador1.txt",ios::out);// abrir archivo para el jugador 1
 	archivo2.open("jugador2.txt",ios::out);// abrir archivo para el jugador 2
 
 	if(archivo1.fail()) // aviso si el archivo no se abrio
	 {
	 	cout<<"no se  pudo abrir el archivo";
	 	exit(1);
	 }	
	 
   for (i=0;i<=n;i++) // llenado del archivo
   {                // para graficar las partidas ganadas
     	archivo1<<i<<" "<<p1[i]<<"\n";  //lo que almacena es como van ganando en cada partida al final de juego
     	archivo2<<i<<" "<<p2[i]<<"\n";  
   }
 
 
 	archivo1.close();
 	archivo2.close();
 
 

      cout<<"-*-*-*-*-*-*-"<<endl;     
    tf=clock();  //**
    cout<<"Tiempo de ejecucion: "<<double(tf-t0)/CLOCKS_PER_SEC<<endl; //**
}