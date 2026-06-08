class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomeNote_arr[26]={0};
        int magazine_arr[26]={0};
        for(char c:ransomNote){
            ransomeNote_arr[c - 'a']++;
        }
        for(char c:magazine){
            magazine_arr[c - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(magazine_arr[i]<ransomeNote_arr[i]){
                return false;
            }
        }
        return true;
    }
};
