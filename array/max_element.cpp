#include<iostream>
using namespace std;
int maxelement(int arr[],int size){
    int max=arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    
    }
    int result= maxelement(arr,size);
    cout<<"your max element in the array is: "<<result;
}

