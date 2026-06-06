#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(1);
    int target=9;
    vector<int> ans;
    int i=0,j=vec.size()-1;
    while(i<j){
        int pairsum=vec[i]+vec[j];
        if(pairsum>target){
            j--;
        }
        else if(pairsum<target){
            i++;
        }
        else{
            cout<<"pair found at index "<<i<<" and "<<j<<endl;
            return 0;
        }
        

    }
cout<<"pair not found"<<endl;
    return 0;

            

            }

    
    
    

