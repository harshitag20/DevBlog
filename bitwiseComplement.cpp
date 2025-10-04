class Solution {
public:
    int bitwiseComplement(int n) 
    {
        int bit;
        int ans=0;
        int i=0;
        if(n==0) return 1;
        while(n)
        {
            //bit = ~(n&1);
            if((n&1)==1){
                bit=0;
            }
            else bit=1;
            ans= ans + (bit * pow(2,i));
            i++;
            n=n/2;
        }
        return ans;
    }
};
