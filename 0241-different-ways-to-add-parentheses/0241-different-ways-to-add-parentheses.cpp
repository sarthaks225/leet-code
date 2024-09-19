class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;
        
        for( int i=0; i < expression.size(); ++i)
        {
            if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*')
            {
                vector<int> left = diffWaysToCompute(  expression.substr(0, i) );
                vector<int> right = diffWaysToCompute( expression.substr(i+1) );
                
                for(auto leftNum : left)
                {
                    for(auto rightNum : right)
                    {
                        if(expression[i] == '+')result.push_back(leftNum + rightNum);        
                        else if(expression[i] == '-') result.push_back(leftNum - rightNum);
                        else if(expression[i] == '*') result.push_back(leftNum * rightNum);
                    }
                }
                
            }
            
            
        }
        
        if(result.size() == 0) result.push_back( stoi(expression) );
        return result;
    }
};