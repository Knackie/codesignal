int equationSolutions(int l, int r) {

  int result = 0;
  for (int a = l; a <= r; a++) {
    for (int b = l; a <= r; b++) {
      if (a * a * a == b * b) {
        result++;
      }
    }
  }
  return result;
}
