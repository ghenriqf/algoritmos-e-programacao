#include <iostream>
using namespace std;

int main(){
   double valorCorrida;

   cout << "Digite o valor da corrida:";
   cin >>  valorCorrida;

   cout << "O valor final da corrida no periodo diurna:" << valorCorrida+(valorCorrida*0.05) << endl;
   cout << "O valor final da corrida no periodo noturno:" << valorCorrida+(valorCorrida*0.10);
  
   // CORRIDA DIURNA 5% A MAIS NO VALOR FINAL DA CORRIDA
   // CORRINA NOTURNA 10% A MAIS NO VALOR FINAL DA CORRIDA

}