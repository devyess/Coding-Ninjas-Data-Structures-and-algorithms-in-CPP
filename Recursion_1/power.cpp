int power(int x, int n) {
    if(n==0)
        return 1;
    int ans=x*power(x,n-1);
    return ans;
}
