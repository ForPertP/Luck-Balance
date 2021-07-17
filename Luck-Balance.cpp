int luckBalance(int k, vector<vector<int>> contests)
{
    vector<int> imp;
    int luck = 0;

    for (size_t i = 0; i < contests.size(); ++i)
    {
        if (contests[i][1])
        {
            imp.push_back(contests[i][0]);
            luck -= contests[i][0];
        }
        else
        {
            luck += contests[i][0];
        }
    }

    sort(imp.begin(), imp.end(), greater<int>());

    for (size_t i = 0; i < min(k, (int)imp.size()); ++i)
    {
       luck += 2 * imp[i];
    }

    return luck;
}
