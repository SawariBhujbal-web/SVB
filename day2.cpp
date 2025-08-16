#include<iostream>
using namespace std;
int main(){
    int arr[15]={1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for(int i=1; i<=15; i++){
        bool missingElement =false;
        for(int j=1; j<14; j++){
            if(arr[j]==i){
            missingElement =true;
            break;
            }
        }
        if(missingElement==false){
            cout<<"missing element is : "<<i;
        }
    }
return 0;
 }        
