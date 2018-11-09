std::string longestDigitsPrefix(std::string inputString) {
  std::string result = "";
  for (int i = 0; i < inputString.size(); i++) {
    if ( isdigit(inputString[i])==true ) {
      result += inputString[i];
    }
    else {
      break;
    }
  }
  return result;
}
