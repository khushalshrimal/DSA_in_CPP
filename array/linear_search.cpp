#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"element found"<<endl;
            return i;
        }
    }
    return -1;

}
int main(){
int arr[]={2,4,24,6};
int size=4;
int target=4;
cout<<linear_search(arr,4,target)<<endl;
return 0;

}