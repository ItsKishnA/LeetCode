class Solution {
public:
    bool isValid(string s) {
        vector<char> paren(s.length());

        if(s.length()%2 != 0)
            return false;

        for(int i=0; i<s.length(); i++){
            if(s[i]==')'){
                if(paren.back()=='('){
                    paren.pop_back();
                    continue;
                }else
                    return false;
            }
            else if(s[i]=='}'){
                if(paren.back()=='{'){
                    paren.pop_back();
                    continue;
                }else
                    return false;
            }
            else if(s[i]==']'){
                if(paren.back()=='['){
                    paren.pop_back();
                    continue;
                }else
                    return false;
            }else{
                paren.push_back(s[i]);
            }
        }

        for (char c : paren) 
            if (c != '\0') 
                return false;

        return true;
    }
};