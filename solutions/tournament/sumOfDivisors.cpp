int sumOfDivisors(int n) {
    int sum=0;
    int nsecond = n;
    for (int i = 1 ; i <= n; i++)
    {
        if (n % i == 0)
        {
          
            sum +=i;
    }
    }
    return sum;

}
