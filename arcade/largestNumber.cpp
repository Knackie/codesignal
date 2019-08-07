int largestNumber(int n) {
    string largest ="";
    for (int i=0; i<n; i++)
    {
        largest += "9";
    }
    
    return std::atoi(largest.c_str());
}
