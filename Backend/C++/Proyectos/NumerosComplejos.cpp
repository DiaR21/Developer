#include <iostream>
using namespace std;

class Complex{
        double real1,imag1;
        public: 
	   double pReal();
            double pImag();
            Complex(double real1=0, double imag1=1);
            void AuxComplex(double, double);
            Complex NuevoComplex();
            Complex SumaComplex(Complex,Complex);
            Complex MultComplex(Complex,Complex);
            void Desplegar(Complex);
};

Complex::Complex(double real, double imag)
{real1=real; imag1=imag;}

void Complex::AuxComplex(double auxR, double auxI)
{real1=auxR; imag1=auxI;}

double Complex::pReal(){return real1;}

double Complex::pImag(){return imag1;}

Complex NuevoComplex(Complex c3){return c3;}

Complex Complex::SumaComplex(Complex c1,Complex c2)
{
    Complex suma;
    double    c1R=c1.pReal(),c1I=c1.pImag(),c2R=c2.pReal(),c2I=c2.pImag(),c3R,c3I;
    c3R=c1R+c2R;
    c3I=c1I+c2I;
    suma.AuxComplex(c3R,c3I);
    return suma;
}

Complex Complex::MultComplex(Complex c1,Complex c2)
{
    Complex mult;
    double c1R=c1.pReal(),c1I=c1.pImag(),c2R=c2.pReal(),c2I=c2.pImag(),c3R,c3I;
    c3R=c1R*c2R+(-1)*c1I*c2I;
    c3I=c1R*c2I+c2R*c1I;
    mult.AuxComplex(c3R,c3I);
    return mult;
}

void Complex::Desplegar(Complex nuevo)
{cout<<"   "<<nuevo.pReal()<<"+"<<nuevo.pImag()<<"i"<<endl;}

int main()
{
    Complex  c1(4.0,7.0),c2(8.0,4.0),c3,c4;
    //Complex  c1(3.0,2.0),c2(3.0,-2.0),c3,c4;
    cout<<"\n   c1="<<c1.pReal()<<"+"<<c1.pImag()<<"i";
    cout<<"\n   c2="<<c2.pReal()<<"+"<<c2.pImag()<<"i";
    c3=c3.SumaComplex(c1,c2);
    cout<<"\n   El nu`mero complejo c3=c1+c2 es: \n";
    c3.Desplegar(c3);
    c3=c3.MultComplex(c1,c2);
    cout<<"   El nu`mero complejo c3=c1*c2 es: \n";
    c3.Desplegar(c3);
    return 0;
}