class Solution {
public:
    int numberOfSteps(int num) {
        int steps=0;
        if(num>0){
            if(num%2==0){
                steps++;
                return 1+numberOfSteps(num/2);
            }
            else{
                num--;
                steps++;
                return 1+numberOfSteps(num);
            }
        }
        return 0;
        
    }
};