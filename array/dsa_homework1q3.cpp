#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,5,1,2};
    int size=5;
    for(int i=0;i<size;i++){
        int count=0;

        for(int j=0;j<size;j++){

if(arr[i]==arr[j]){
    count++;

}

        }
        if(count==1){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}