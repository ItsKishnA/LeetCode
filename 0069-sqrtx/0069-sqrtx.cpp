class Solution {
public:
    int mySqrt(int x) {
        int sqrt=0;

        if(x==0)return 0;

        for(long int i=0; i<=x; i++){
            if((i*i)>x)
            return i-1;
            else if((i*i)==x){
                return i;
            }
        }
        return 1;
    }
};