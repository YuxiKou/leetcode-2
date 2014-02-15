class Solution {
public:
    string addBinary(string a, string b) {
        int lengthA = a.length();
        int lengthB = b.length();
        if(lengthA == 0) return b;
        if(lengthB == 0) return a;

        string ret = "";
        int carry = 0;
        while(lengthA > 0 || lengthB > 0 || carry > 0)
        {
        	--lengthA;
        	--lengthB;
        	int sum = carry;
        	if(lengthA > 0) sum += a[lengthA] - '0';
        	if(lengthB > 0) sum += b[lengthB] - '0';
        	carry = sum / 2;
        	sum %= 2;
        	char temp = '0' + sum;
        	ret = temp + ret;
        }
        return ret;
    }
};