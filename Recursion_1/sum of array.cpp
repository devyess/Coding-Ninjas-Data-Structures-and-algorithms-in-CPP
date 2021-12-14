int sum(int i[], int n) {
    if(n==0)
        return 0;
    int ans=sum(i+1,n-1);
    return i[0]+ans;
}
