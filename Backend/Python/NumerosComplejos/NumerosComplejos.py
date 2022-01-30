class Complejo:
    def __init__(self, _real, _imag):
          self.comp = complex(_real,_imag)
    def __str__(self):
        return str(self.comp)
    def complex():
        comp = complex(0,1)
        return comp
    def __eq__(self, c2):
         if self.comp == c2.comp:
            return True
         return False
    def __add__(self, c2):
        au= self.comp + c2.comp
        return au
    def __mul__(self, c2):
        au = self.comp*c2.comp
        return au
c1 = Complejo(4, 7); c2 = Complejo(8, 4)
#c1 = Complejo(3, 2); c2 = Complejo(3, -2)
c3 = Complejo.complex()
c1.comp + c2.comp + c3
print("c1=",c1);
print("c2=",c2);
print("El numero complejo c3=c1+c2 es",c1.comp+c2.comp);
print("El numero complejo c3=c1*c2 es",c1.comp*c2.comp);