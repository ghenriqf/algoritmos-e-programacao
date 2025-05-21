#include <iostream> 
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,2};
    int pos = 0;
    int x = 2;

    for(int i = 0; i<5; i++){
        if(arr[i] == x){
            pos = i;
        }

    }

    cout << "A ultima ocorrencia do valor x foi na posicao " << pos;

    return 0;


}