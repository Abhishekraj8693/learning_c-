#include<iostream>
using namespace std;
int second_largest(int arr[], int n){
    int largest=arr[0];
    int second_largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
    }
    return second_largest;
}
int main(){
    int arr[5]={1,4,3,5,5};
    int result=second_largest(arr,5);
    cout<<"Second largest element is:"<<result;
}
