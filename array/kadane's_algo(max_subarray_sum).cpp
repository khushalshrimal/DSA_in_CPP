#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,-1,5,-2,8};
    int size=5;
    int maxsum=INT_MIN;
    for(int start=0;start<size;start++){
        int currsum=0;
        for(int end=start;end<size;end++){
            currsum=currsum+arr[end];
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
    }
    cout<<"maximum sub array sum"<<endl<<maxsum<<endl;
    return 0;

}