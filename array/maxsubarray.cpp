#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,-2,5,-1,7};
int size=5;
int maxsum=INT_MIN;

for(int start=0;start<size;start++){
    int currsum=0;
    
    for(int end=start;end<size;end++){
        currsum=currsum+arr[end];
        maxsum=max(currsum,maxsum);


    }
    


}
cout<<"maximun subarray sum"<<endl<<maxsum<<endl;
return 0;
}