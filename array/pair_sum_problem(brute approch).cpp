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
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]+vec[j]==target){
                cout<<"pair found at index "<<i<<" and "<<j<<endl;
                return 0;

            }

        }
    }
cout<<"pair not found"<<endl;

    return 0;
    
}

