#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,-1,5,-2,8};
    int size=5;
    int maxsum=INT_MIN;
    int currsum=0;
    for(int start=0;start<size;start++){
        
        
            currsum=currsum+arr[start];
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
    
    cout<<"maximum sub array sum"<<endl<<maxsum<<endl;
    return 0;

}