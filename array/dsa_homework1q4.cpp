#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,6,7};
    int size1=5;
    int size2=4;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
            }
        }
    }
    return 0;

}