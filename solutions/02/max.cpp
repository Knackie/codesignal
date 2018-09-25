int adjacentElementsProduct(std::vector<int> inputArray) {
int max=-1000000000;
    for(int i=0;i<inputArray.size()-1;++i)
    {
        if (inputArray[i]*inputArray[i+1]>max && i<inputArray.size()-1)
            max = inputArray[i]*inputArray[i+1];
    }
    return max;
}
