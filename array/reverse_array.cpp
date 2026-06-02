#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    
    }
}
int main(){
int arr[]={4,8,6,3,7};
int size=5;
reverse(arr,5);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;

}
return 0;
}