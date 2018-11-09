int factorialTrailingZeros(int n) {
 int r = 0;
        while (n >= 5) {
            r += n / 5;
            n /= 5;
        }
        return r;
    }
