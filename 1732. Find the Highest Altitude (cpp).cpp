class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0, altitude = 0;
        for(int i = 0;i<gain.size();i++)
        {
            altitude += gain[i];

            if(altitude > highest)
                highest = altitude;

            
        }

        return highest;
    }
};