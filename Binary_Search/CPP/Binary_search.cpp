#include <iostream>
using namespace std;
int Binary_Search(int arr[],int Low ,int High,int X){
    while(Low<=High){
        int middle = Low + (High - Low)/2;
        if(arr[middle] == X){
            return middle;
        }else if(arr[middle]<X){
            Low = middle + 1;
        }else{
            High = middle - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int z = Binary_Search(arr, 0, n - 1, 10);
    if(z == -1){
        cout << "item not found?! :(" << endl;
    }else {
        cout << "item found on index = " << z << " :)" << endl;
    }
    return 0;
}