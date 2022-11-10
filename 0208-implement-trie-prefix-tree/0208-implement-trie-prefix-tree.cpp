struct trie{
    trie * charat[26];
    bool eow;
    
    bool containschar(char  ch)
    {
        return (charat[ch-'a']!=NULL);
    }
    
    void put(char ch , trie* node)
    {
        charat[ch-'a'] = node;
    }
    
    trie * get(char ch)
    {
        return charat[ch-'a'];
    }
    
  void setflag()
  {
      eow = true;
  }
    
  bool isend()
  {
      return eow;
  }
    
};
class Trie {
    private: trie * root;
    
public:
    Trie() {
        root= new trie();
    }
    
    void insert(string word) {
        trie * node =root;
        for(int i=0;i<word.length();i++)
        {
           if(!node->containschar(word[i]))
           {
               node->put(word[i],new trie());
           }
            
            node = node->get(word[i]);
        }
        node->setflag();
    
    }
    
    bool search(string word) {
       trie * node = root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containschar(word[i]))
                return false;
            
            node = node->get(word[i]);
        }
        return node->isend();
        
    }
    
    bool startsWith(string prefix) {
        trie * node = root;
        for(int i=0;i<prefix.length();i++)
        {
            if(!node->containschar(prefix[i]))
                return false;
            
            node = node->get(prefix[i]);
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */