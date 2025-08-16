#include<iostream>
using namespace std;
int main(){
   int arr[9]={0, 1, 0, 0, 1, 1, 2, 1, 2};
   int n=9;
   for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
   cout<<"sorted array is :";
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
