#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks[]={25,23,7,9,24};
    int size=5;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size-1;i++){
        marks[i]<smallest;
        smallest=marks[i];
        largest =max(marks[i],largest);
    }
    cout<<"smallest"<<endl<<smallest<<endl;
    cout<<"largest"<<endl<<largest<<endl;
    return 0;


}