int makeArrayConsecutive2(std::vector<int> statues) {
    int i,j=1,output=0;
std::sort(statues.begin(),statues.end());
    for(int i=0;i<statues.size()-1;i++)
    {
        while (statues[i]+j!=statues[i+1])
        {
            output++;
            j++;
        }
        j=1;
}
    return output;
}
