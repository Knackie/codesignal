bool checkPalindrome(std::string inputString) {
    using namespace std;
    string copy=inputString;
   reverse(copy.begin(), copy.end());
    return (copy==inputString);
}
