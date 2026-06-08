#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> vec;
vec.push_back(2);
vec.push_back(2);
vec.push_back(1);
vec.push_back(1);
vec.push_back(1);
vec.push_back(1);
int size=6;
for(int value=0;value<size;value++){
    int freq=0;
    for(int element=0;element<size;element++){
        if(vec[element]==vec[value]){
            freq++;
        }
        if(freq>size/2){
            cout<<"majority element"<<endl<<vec[value]<<endl;
            return 0;
        }
    }
}
cout<<"no majority element"<<endl;
return 0;

}