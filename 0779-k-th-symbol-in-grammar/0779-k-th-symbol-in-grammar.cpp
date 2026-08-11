class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1&&k==1){
            return 0;
        }
        int length=pow(2,n-1);
        int middle=length/2;
        if(k<=middle){
            return kthGrammar(n-1,k);
        }
        else{
            int result= kthGrammar(n-1,k-middle);
            if(result==0){
                result=1;
            }
            else{
                result= 0;
            }
            return result;

        }
        
    }
};