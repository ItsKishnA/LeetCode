class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // if all 9
        bool all9=true;
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]!=9){
                all9=false;
                break;
            }
        }

        if(digits.size()==1 && digits[0]<9){
            digits[0]++;
            return digits;
        }

        if(all9){
            digits.push_back(0);
            fill(digits.begin(), digits.end(), 0);
            digits[0]=1;
            return digits;
        }

        

        // if all not 9

        // adding 1 to last
        digits[digits.size()-1]++;

        // if anything gets bigger, updating them
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]==10){
                digits[i]=0;
                digits[i-1]++;
            }
            // else{
            //     break;
            // }
        }

        
        return digits;
    }
};