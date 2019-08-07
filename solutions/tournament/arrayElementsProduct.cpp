int arrayElementsProduct(std::vector<int> inputArray) {

  int result = inputArray[0];

  for (int i = 0; i < inputArray.size(); i++) {
    result *= inputArray[i];
  }
  return result;
}
