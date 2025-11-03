#include<iostream>
#include<string>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]){
    for (int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

bool checkPermutation(string s1, string s2){
    if (s1.length() > s2.length()) return false;
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++){
        // int index = s1[i] - 'a';
        freq[s1[i] - 'a']++;
    }

    int windSize = s1.length();

    for (int i = 0; i < s2.length(); i++){
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while(windIdx < windSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            idx++;
            windIdx++;
        }

        if(isFreqSame(freq, windFreq)){
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "endbaooo";

    cout<< checkPermutation(s1, s2);
}