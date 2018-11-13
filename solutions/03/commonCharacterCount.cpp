int commonCharacterCount(std::string s1, std::string s2) {
    int count1[26] = {0};
    int count2[26] = {0};
    
    for(char c: s1) ++count1[c-'a'];
    for(char c: s2) ++count2[c-'a'];
    
    int ret = 0;
    for(int i=0; i<26; ++i)
        ret += min(count1[i],count2[i]);
    
    return ret;
}
