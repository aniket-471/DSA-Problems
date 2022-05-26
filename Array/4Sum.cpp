class Solution
{
    public:
        vector<vector < int>> fourSum(vector<int> &a, int target)
        {
            vector<vector < int>> ans;
            if (a.empty()) return ans;

            sort(a.begin(), a.end());
            for (int i = 0; i < a.size(); ++i)
            {
                for (int j = i + 1; j < a.size(); ++j)
                {
                    int target_2 = target - (a[i] + a[j]);
                    int front = j + 1, back = a.size() - 1;
                    while (front < back)
                    {
                        int two_sum = a[front] + a[back];
                        if (target_2 > two_sum) front++;
                        else if (target_2 < two_sum) back--;
                        else
                        {
                            vector<int> quad = { a[i],
                                a[j],
                                a[front],
                                a[back]
                            };
                            ans.push_back(quad);
                            while (front < back && a[front] == quad[2]) front++;
                            while (front < back && a[back] == quad[3]) back--;
                        }
                    }
                    while (j < a.size() - 1 && a[j] == a[j + 1]) j++;
                }
                while (i < a.size() - 1 && a[i] == a[i + 1]) i++;
            }
            return ans;
        }
};
