class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> scoreBoard;
        int i = 0;
        for( auto o : operations)
        {
            i = scoreBoard.size();
            if( o == "+")
            {
                scoreBoard.push_back(scoreBoard[i-2] + scoreBoard[i-1]);
            }
            else if( o == "D")
            {
                scoreBoard.push_back( scoreBoard[i-1] * 2 );
            }
            else if( o == "C")
            {
                scoreBoard.pop_back();
                continue;
            }
            else {
                scoreBoard.push_back( stoi(o) );
            }
              ++i;
        }
        int result = 0;
        
        for( auto s : scoreBoard)
        {
            result += s;
        }
        return result;
    }
};