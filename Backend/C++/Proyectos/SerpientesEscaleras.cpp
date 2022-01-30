
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<cmath>
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

int main()
{
    time_t tf; //**
    time_t t0 = clock();  //**
    randomize();  //**   
      
      cout<<"\n*******Serpiemtes y escaleras*******"<<endl;
      
      int n=5, j=1,a=0,b=0, i=0 ,p=0,t=0,par=200000;
      int ti[n], ju[n],se[n],es[n],la[n],e[6],s[6];
 
     // cout<<"Numero de jugadores : "<<endl; cin>>n;
     // cout<<"Numero de partidas : "<<endl; cin>>par;
      
       for(i=0;i<=n;i++) // inicializando los arreglos  perteneciones a los estados del jugador
          {
             ju[i]=0; // posicion por jugador
             ti[i]=0; // partidas granadas por jugador
             se[i]=0; // numero de serpiestes obtenidas por jugador
             es[i]=0; // numero de escaleras obtenidas por jugador
             la[i]=0; // lanzamientos por jugador
              }
      for ( j=1;j<=par;j++) // inicio de las partidas
        {
             // inicio de las nuevas posiciones de las serpientes y escaleras para cada partida
             for(i=1;i<=6;i++) // inicializa los arreglos para serpientes y escaleras
                 {
                  s[i]=0;
                  e[i]=0;
                 }      
            //  posiciones menores para serpientes y escalesras    
                         // a y b son el intervalo, a=2 ya que no se puede tener inicio de escalera o final de serpiente en 1 
             a=2; b=23;  // b=23 ya que no se puede tener final de escalera o inicio de serpiente en la ultima fila
             s[1]=(b-a)*Uniforme()+a;   // primera posicion de comienzos   
             t=2; // continuamos con dos a 6
             while(t<=6)
                 {
                     p=0; // auxiliar
                     a=2; b=23;
                     s[t]=(b-a)*Uniforme()+a;
                     for (i=1;i<t;i++)     //  buscamos que sean diferentes entere si
                       { 
                         if (s[t]==s[i])
                           {
                             p=t; // regresamos a la misma posicion
                           }
                       }
                     if(p==0)
                       {
                         t++; // si son diferesntes seguimos
                       }
                     else 
                      {
                         t=p; // si son iguales lo volvemos a buscar 
                      }
                  }
                  
             // posiciones mayores para serpientes y escalesras     
             t=1; // auxiliar
              while (t<=2)       
                 { 
                     p=0;            // a y b son el intervalo, a=s[1]+6 ya que no se puede estar en la misma fila de s[1] 
                     a=s[1]+6; b=29; // b=29 ya que no se puede tener final de escalera o inicio de serpiente en la ultima casilla
                     e[1]=(b-a)*Uniforme()+a;// primera posicion de final  
                     for (i=1;i<t;i++) //    diferente 
                        { 
                           if (e[1]==s[i] ) // s y e no pueden estar el el mismo renglon y e siempre debe ser mayor (esta a lo menos una fila arriba)
                            {
                              p=t; 
                            }
                         }   
                     if (p!=t)
                       {
                         t=3;
                       }     
                  }
             t=2; // continuamos con dos a 6
             while(t<=6)
                 {
                     int d=0; 
                     p=0;
                     a=s[t]; b=29; 
                     e[t]=(b-a)*Uniforme()+a;
                     d=e[t]-a;// auxiliar, si e[t] esta el la misma fila le suma 6 unidades
                     if(d<=6)
                       {
                         e[t]=e[t]+6;
                       }
                    for (i=1;i<t;i++)  //  buscamos que sean diferentes entere si
                       { 
                          if (e[t]==e[i])
                           {
                               p=t; // regresamos a la misma posicion
                           }
                       }
                       
                       for (i=1;i<=t;i++)     //  buscamos que sean diferentes entere e[t] y s[i]
                       { 
                          if (e[t]==s[i])
                           {
                               p=t; // regresamos a la misma posicion
                           }
                       }
                   if(p==0)
                     {
                       t++; // si son diferesntes seguimos
                     }
                  
                  else 
                     {
                       t=p; // si son iguales lo volvemos a buscar 
                      }
                      
                  }
         /*   cout<<j<<" \n"; // posicion finales de la partida i para Serpientesy escaleras
              for(i=1;i<7;i++) 
              {
               cout<<s[i]<<"-----"<<e[i]<< " \n"; 
              }
         */
         for(i=1;i<=n;i++) // nuevo arreglo de jugadores para cada para
              {
               ju[i]=0;
              }
         t=0;
         p=0;
         while (p<=11)
              {
                 p=0;
                 t++;
                 a=1; 
                 b=6;
                     ju[t]=(b-a)*Uniforme()+a+ju[t];// lanzamiento del dado
                     la[t]++; // numero de lanzamiento por jugador, para todas las partidas 
                     for (i=1;i<=3;i++)
                     {
                         if(ju[t]==s[i]) // busca si el jugador esta en el inico de la escalera
                          {
                             ju[t]=e[i]; // sube al jugador al final de la escalera
                             es[t]++;  // numero de escaletas en todas las partidas
                          }
                         if(ju[t]==e[i+3])// busca si el jugador esta en el inico de la Serpiente
                         {
                             ju[t]=s[i+3]; // bsjs al jugador al final de la Serpiente
                              se[t]++; // numero de escaletas en todas las partidas
                         }
                      }   
                     if(ju[t]>=30) // seleccion del ganador 
                     {
                         p=15;
                         ti[t]=ti[t]+1; // lleva el numero de partidas ganadas por jugador
                     }
                     if(t==n) // nueva ronda le Lanzamientos
                     {
                         t=0;
                     }
                 }
        }
        
        float H=0, l=0;// auxiliares 
             cout<<"Jugador--Par Gandas--Escaleras--Serpientes--Lanzamientos promedio "<<" \n"; 
          for(i=1;i<=n;i++) // reswultados 
              {
                  H=ti[i];
                  l=la[i];
               cout<<i<<"--------"<<H/par<<"--------"<<es[i]<<"--------"<<se[i]<<"-----------"<<l/par<<" \n"; //m tiradas totales promedio
              }
           int c=0;  
        for(i=1;i<=n;i++) 
              {
               c=ti[i]+c; 
              }
           cout<<c/par;
        
      cout<<"-*-*-*-*-*-*-"<<endl;   
      
    tf=clock();  //**
    cout<<"Tiempo de ejecucion: "<<double(tf-t0)/CLOCKS_PER_SEC<<endl; //**
}