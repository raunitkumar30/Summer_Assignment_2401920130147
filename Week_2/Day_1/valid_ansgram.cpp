class Solution {
public:
    bool isSame(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool isAnagram(string s, string t) {
        int freq1[26]={0};
        int freq2[26]={0};
        for(char c:s){
            freq1[c - 'a']++;
        }
        for(char c:t){
            freq2[c - 'a']++;
        }
        if(isSame(freq1,freq2)){
            return true;
        }
        return false;
    }
};
