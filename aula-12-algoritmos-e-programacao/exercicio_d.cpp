#include <iostream> 
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int arrClone[5];

    for(int i = 0; i<5; i++){
        arrClone[i] = arr[i];
    
        cout << arrClone[i] << " ";
    }

    return 0;

}