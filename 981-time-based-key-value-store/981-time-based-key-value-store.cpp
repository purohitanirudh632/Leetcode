class TimeMap {
public:
    map<string,vector<pair<string,int>>> mp;
    TimeMap() {
        mp.clear();
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    int binarySearch(int timestamp,int low,int high,string key)
    {
        while(low<high)
        {
            int mid=(low+high)/2;
            if(mp[key][mid].second==timestamp)
                return mid;
            if(mp[key][mid].second<timestamp)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
    string get(string key, int timestamp) {
        int mid=binarySearch(timestamp,0,mp[key].size(),key);
        cout<<mid<<endl;
        if(mid==-1)
        {
            int i;
            if(mp[key].size()==0)
                return "";
            for(i=mp[key].size()-1;i>=0;i--)
                if(mp[key][i].second<=timestamp)
                    break;
            if(i==-1)
                return "";
            return mp[key][i].first;
        }
        return mp[key][mid].first;
    }
};