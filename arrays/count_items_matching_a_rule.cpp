 int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j, cnt = 0;
        if(ruleKey == "type") j = 0;
        else if(ruleKey == "color") j = 1;
        else j = 2;
        for(int i = 0; i < items.size(); i++)
            if(items[i][j] == ruleValue) cnt++;
        return cnt;
    }