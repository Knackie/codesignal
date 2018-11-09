int leastFactorial(int n) {
    int product = 1;
    int i = 2;
    while (product < n) {
        product *= i++;
    }
    return product;
}
