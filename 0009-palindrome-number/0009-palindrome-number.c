bool isPalindrome(int x) {

    if(x<0)
    return false;

    int temp=x, rev=0,remainder; 

      while(temp!=0){

        remainder = temp%10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && remainder > 7)) return false;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && remainder < -8)) return false;
        rev = rev * 10 + remainder;
        temp = temp/10;
      }


      
        return (x==rev);
      

    
}