std::vector<std::string> sortByLength(std::vector<std::string> inputArray) {
 for (int i=1 ;i<inputArray.size(); i++) 
    { 
        string temp = inputArray[i]; 
  
        // Insert s[j] at its correct position 
        int j = i - 1; 
        while (j >= 0 && temp.length() < inputArray[j].length()) 
        { 
            inputArray[j+1] = inputArray[j]; 
            j--; 
        } 
        inputArray[j+1] = temp; 
     
}
    return inputArray;
}
