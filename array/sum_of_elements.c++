#include<iostream>
using namespace std;
int sumofelement(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"enter the size of element: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    int result = sumofelement(arr, size);
    cout<<"sum of elements is: "<<result;
    
}

