class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    unordered_set<int> set;
    
    bool insert(int val) {
        int size = set.size();
        set.insert(val);
        if(size==set.size())
          return false;
        else
            return true;
    }
    
    bool remove(int val) {
        if(set.count(val)==1)
        {
         set.erase(val);
         return true; 
        }   
         else
             return false;
         
    }
    
    int getRandom() {
        
int idx = rand()%set.size();
auto it = set.begin();
for (int i = 0; i < idx; i++)
{
    it++;
}
  int n = *it;      
return n;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */