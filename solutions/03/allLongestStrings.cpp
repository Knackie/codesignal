std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
int max=0;
    std::vector<std::string> result;
    for(int i=0;i < inputArray.size();i++)
        if(max<inputArray[i].length())
            max=inputArray[i].length();
    for(int i=0;i < inputArray.size();i++)
    if(max==inputArray[i].length())
            result.push_back(inputArray[i]);
    return result;
}
