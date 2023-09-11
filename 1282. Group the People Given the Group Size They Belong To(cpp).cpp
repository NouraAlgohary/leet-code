class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       vector<vector<int>> groups;
       map<int, vector<int>> groupMembers;

       for(int i = 0;i<groupSizes.size();i++)
           groupMembers[groupSizes[i]].push_back(i);

       for(auto group : groupMembers)
        {
            cout<<group.first<<"   "<<(group.second).size()<<endl;
            if((group.second).size() == group.first)
            {
                groups.push_back(group.second);
            }else
            {
            vector<int>current_group;
            int cnt = group.first;

            for(auto member : group.second)
            {
                if(cnt)
                {
                    current_group.push_back(member);
                    cnt--;
                }
                else
                {
                    groups.push_back(current_group);
                    current_group.clear();
                    current_group.push_back(member);
                    cnt = group.first -1 ;
                }
            }
            groups.push_back(current_group);
            }
        }

        return groups;
    }
    
};