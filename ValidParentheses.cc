class Solution {
public:
    bool isValid(string s) {
  		stack<char> parentheses;
  		for(int i = 0; i < s.length(); ++ i)      
  		{
  			switch(s[i])
  			{
  				case '(': case '[': case '{':
  					parentheses.push(s[i]);
            break;
  				case ')': 
  					if(parentheses.empty() || parentheses.top() != '(') return false;          parentheses.pop();
            break;
          case ']':           
            if(parentheses.empty() || parentheses.top() != '[') return false;          parentheses.pop();
            break;
          case '}': 
            if(parentheses.empty() || parentheses.top() != '{') return false;          parentheses.pop();
            break;

  				default:
  					return false;
  			}
  		}
  		return parentheses.empty();
    }
};