int numberOfOperations(int a, int b) {

  if (a < b) {
    std::swap(a, b);
  }
  if (b % a != 0) {
    return 0;
  }
  return 1 + numberOfOperations(a / b, b);
}
