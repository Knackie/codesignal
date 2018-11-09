int smallestNumber(int n) {
if (n==1)
    return 0;
    std::string result="10";
    for(int j=2;j<400;j++)
        if(j==n)
            return atoi(result.c_str());
    else 
        result+="0";
        
}
