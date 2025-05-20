#include <iostream> 
using namespace std;

int main(){
  
    int arr[5] = {1,2,3,4,5};
    int maior = 0;

    for(int i = 0; i<5; i++){
        if(arr[i] > maior){
            maior = arr[i];
        }
    }

    cout << "O maior valor e " << maior;

    return 0;

}