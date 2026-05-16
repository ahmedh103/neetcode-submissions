class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int count =0;
       sort(s.begin(), s.end()); 
       sort(t.begin(), t.end()); 
       for(int i=0; i<s.size();i++){
        if(s[i] == t[i] ){
            continue;
        }else{
            count++;
        }
       

       } 
       if(count>0){
        return false;
       }else{
        return true;
       }
    }
};
