std::vector<int> onlyEvenNumbers(int left, int right) {
if(left%2!=0)
    left++;
    vector<int> final;
    for(left;left<=right;left+=2)
        final.push_back(left);
    
    return final;
}
