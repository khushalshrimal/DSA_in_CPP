#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int size=5;
int smallest=INT_MAX;
int largest=INT_MIN;
int maxindex=0;
int minindex=0;
for(int i=0;i<size;i++){
    if(arr[i]>largest){
    largest=max(arr[i],largest);
    maxindex=i;
    }
    
}
for(int j=0;j<size;j++){
    if(arr[j]<smallest){
    smallest=min(arr[j],smallest);
    minindex=j;
    }

}
swap(arr[maxindex],arr[minindex]);
for (int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
return 0;





}