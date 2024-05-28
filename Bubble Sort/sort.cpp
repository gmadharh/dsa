#include <iostream>

int main() {

    int arr[] = {10,435,2,3,4,0,1,2,3,4,5,6,7,77,34,65,19};

    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;

    for(int i = 0;i < n - 1;i++){
        for(int j = 0; j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }        

    }

    for(int i = 0;i < n;i++){
        std::cout << arr[i] << " ";
    }    


    return 0;
}