class Solution
{
public:
    vector<vector<int> > permuteUnique(vector<int> &num)
    {
        int n = num.size();
        std::vector<vector<int> > result;
        if (n < 1) return result;
        sort(num.begin(), num.end());

        std::vector<int> curPerm;
        std::vector<bool> visited(n, false);
        getPermutation(result, visited, curPerm, num);
        return result;
    }
    void getPermutation(std::vector<vector<int> > &result,
                        std::vector<bool> &visited,
                        std::vector<int> &curPerm,
                        std::vector<int> &num)
    {
        if (curPerm.size() == visited.size())
        {
            result.push_back(curPerm);
            return;
        }
        for (int i = 0; i < num.size(); ++i)
        {
            if (visited[i] == false)
            {
                if (i > 0 && num[i] == num[i - 1] && visited[i - 1] == false) continue;

                visited[i] = true;
                curPerm.push_back(num[i]);
                getPermutation(result, visited, curPerm, num);
                curPerm.pop_back();
                visited[i] = false;
            }
        }
    }
};