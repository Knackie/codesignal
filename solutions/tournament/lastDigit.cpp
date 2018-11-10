int lastDigit(int a, int b) {
    if(b==0)
    {
        if(a>0)
            return 1;
        
        else
            return 0;
    }
    int ans = a%10;
    b--;
    while(b>0)
    {
        ans*=a;
        ans%=10;
        b--;
    }
    
    return ans;
}
