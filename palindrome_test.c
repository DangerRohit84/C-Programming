bool isPalindrome(int x) {
    int r,sum=0,t;
    
        scanf("%d",&x);
        t=x;
        
        while(x<0)
        {
          r=x%10;
         sum=sum*10+r;
         x=x/10;
        }
        if(sum==t)
        {
            return true;
        }
        return false;
}
