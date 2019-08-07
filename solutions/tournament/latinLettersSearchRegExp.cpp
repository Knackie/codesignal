bool latinLettersSearchRegExp(std::string input) {
  return regex_search(input.begin(), input.end(), std::regex("[A-Z a-z]"));
}
