bool checkNumber(int i[], int n, int x) {
    
    if(n==0){
        return false;
    }
    else if(i[0]==x)
        return true;
    bool ans=checkNumber(i+1,n-1,x);
    return ans;
}
