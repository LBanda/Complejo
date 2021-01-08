#include <iostream>
using namespace::std;

class Complejo{
  public:
  Complejo(float = 0, float = 0);
  void Recibir();
  float nReal();
  float nImaginario();
  void Suma(float,float,float,float);
  void Resta(float,float,float,float);
  void Multi(float,float,float,float);
  void Division(float,float,float,float);
  void Igual(float,float,float,float);
  void Desigual(float,float,float,float);
  void Mayor(float,float,float,float);
  void Menor(float,float,float,float);

  void Imprimir (){
    cout << "( " << R <<" , " << I <<" )" << endl;
  }

  private:
    float R;
    float I;

};

Complejo::Complejo(float a, float b){
  R = a;
  I = b;
}

void Complejo::Recibir(){
  cout << "\nIntroduce numero Real: " << endl;
  cin >> R;
  cout << "\nIntroduce numero Imaginario: " << endl;
  cin >> I;
}

float::Complejo::nReal(){
  return R;
}

float::Complejo::nImaginario(){
  return I;
}

void Complejo::Suma(float a, float b, float c, float d){
  cout << "\n La suma es: ( " << a + c << " , " << b + d <<" )" << endl;
}

void Complejo::Resta(float a, float b, float c, float d){
  cout << "\n La resta es: ( " << a - c << " , " << b - d <<" )" << endl;
}

void Complejo::Multi(float a, float b, float c, float d){
  cout << "\n La multiplicacion es: ( " << a * c << " , " << b * d <<" )" << endl;
}

void Complejo::Division(float a, float b, float c, float d){
  cout << "\n La division es: ( " << a / c << " , " << b / d <<" )" << endl;
}

void Complejo::Igual(float a, float b, float c, float d){
  if(a == c && b == d){
    cout << "\n Igual: True "<< endl;
  }
  else{
    cout << "\n Igual: False "<< endl;
  }
  
}

void Complejo::Desigual(float a, float b, float c, float d){
  if(a != c && b != d){
    cout << "\n Diferente: True "<< endl;
  }
  else{
    cout << "\n Diferente: False "<< endl;
  }
  
}

void Complejo::Mayor(float a, float b, float c, float d){
  if(a > c && b > d){
    cout << "\n Mayor: True "<< endl;
  }
  else{
    cout << "\n Mayor: False "<< endl;
  }
  
}

void Complejo::Menor(float a, float b, float c, float d){
  if(a < c && b < d){
    cout << "\n Menor: True "<< endl;
  }
  else{
    cout << "\n Menor: False "<< endl;
  }
  
}

int main() {
  Complejo s;
  Complejo x;
  Complejo y;

  x.Recibir();
  y.Recibir();
  s.Suma(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Resta(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Multi(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Division(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Igual(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Desigual(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Mayor(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());
  s.Menor(x.nReal(), x.nImaginario(), y.nReal(), y.nImaginario());

  return 0;
}