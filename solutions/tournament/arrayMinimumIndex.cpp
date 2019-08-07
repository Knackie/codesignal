int arrayMinimumIndex(std::vector<int> inputArray) {

    int array = 0;
    int min=inputArray[0];
    for (int i=1; i < inputArray.size(); i++)
    {
        if (inputArray[i]<min)
    {
        min=inputArray[i];
            array = i;
    }
    }
    return array;

}
