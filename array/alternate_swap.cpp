#include<iostream>
using namespace std;
void alternate_swap(int arr[], int n){
    int i = 0;
    while(i<n-1){
        swap(arr[i], arr[i+1]);
        i +=2;
    }
}
void printarray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={2,3,4,5,6};
    cout<<"orignal array:";
    printarray(arr,5);
    cout<<endl;
    cout<<"alternate swap:";
    alternate_swap(arr,5);
    printarray(arr,5);
}
