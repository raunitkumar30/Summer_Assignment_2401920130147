class Solution {
public:
    bool isSameFreq(int fre[],int winfreq[]){
        for(int i=0;i<26;i++){
            if(fre[i] != winfreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i =0; i<s1.length(); i++){
            freq[s1[i] - 'a']++;
        }
        int windSize = s1.length();

        for(int i =0; i<s2.length(); i++){
            int widFreq[26] = {0};
            int idx=i, winIdx=0;
            while(winIdx < windSize && idx < s2.length()){
                widFreq[s2[idx] - 'a']++;
                idx++;
                winIdx++;
            }
            if(isSameFreq(freq,widFreq)){
                return true;
            }
        }
        return false;
    }
};
