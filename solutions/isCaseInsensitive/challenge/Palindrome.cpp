
bool isCaseInsensitivePalindrome(std::string inputString) {
  string reversed  = inputString;
         transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
   transform(reversed.begin(), reversed.end(), reversed.begin(), ::tolower);
        reverse(reversed.begin(), reversed.end());
       if (reversed == inputString)
                return true;
        return false;
   
}
