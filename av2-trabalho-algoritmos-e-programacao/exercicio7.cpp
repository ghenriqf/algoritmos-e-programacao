#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Forneca n termos para a sequencoa fobonacci: ";
    cin >> n;

    int f1=1,f2=2,f3;

    cout << 1 << " " << f1 << " " << f2;
    for(int i = 0; i<=n; i++){
        f3 = f1 + f2;
        cout << " " << f3;
        f1 = f2;
        f2 = f3;
        
    }

    return 0;
}