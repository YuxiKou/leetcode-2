class Solution {
public:
    int atoi(const char *str) {
	    const char *s = str;
        while(s > 0 && *s == ' ') ++s;
        int sign = 1;
        if(*s == '-') 
        {
        	sign = -1;
        	++s;
        }
        else if(*s == '+') ++s;
        if(*s == 0 || *s > '9' || *s < '0') return 0;
        int ret = 0;
        while(*s >= '0' && *s <= '9')
        {
        	if(ret > INT_MAX / 10)
        	{
        		return sign == 1 ? INT_MAX : INT_MIN;
        	}
        	else if(ret == INT_MAX / 10)
        	{
        		if(sign == 1 && *s - '0' > 7) return INT_MAX;
        		else if(sign == -1 && *s - '0' > 8) return INT_MIN;
                else 
                {
                    ret *= 10;
                    ret += *s - '0';
                }
        	}
        	else
        	{
        		ret *= 10;
        		ret += *s - '0';
        	}
        	++s;
        }
        return sign * ret;
    }
};