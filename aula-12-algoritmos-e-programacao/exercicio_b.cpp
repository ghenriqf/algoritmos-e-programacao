#include <iostream> 
using namespace std;

int main(){
    int arr[4] = {1,2,1,3};
    int x = 1;
    int y = 7;

    for(int i = 0; i<4; i++){
        if(arr[i] == x){
            arr[i] = y;
        }
        cout << arr[i] << " ";
    }

    return 0;

}