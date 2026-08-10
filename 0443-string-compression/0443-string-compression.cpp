class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.empty()){
            return 0;
        }
        if(chars.size()==1){
            return 1;
        }
        string k="";
        int count=1;
        
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                count++;
            }
            else{
                k+=chars[i];
                if(count>1){
                    k+=to_string(count);
                }
                count=1;
            }

        }
        k += chars[chars.size() - 1];

        if (count > 1) {
            k += to_string(count);
        }
        for(int i = 0; i < k.size(); i++){
    chars[i] = k[i];
}
        return k.size();
        
    }
};