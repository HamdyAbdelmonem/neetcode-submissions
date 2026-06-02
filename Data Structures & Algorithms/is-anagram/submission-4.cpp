class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        return false;

        int characters[26]= {0};

        for (char x: s)
        characters[x-'a']++;

        for (char x : t)
        characters[x-'a']--;

       for (int i=0; i <26; i++){
        if (characters[i] != 0)
        return false;
               }
        
        return true ;
    }
};
