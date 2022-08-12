struct Node
{
    Node* links[26];
    int countEndWith = 0;
    int countPrefix = 0;
    
    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }
    
    Node* get(char ch)
    {
        return links[ch - 'a'];
    }
    
    void put(char ch, Node* node)
    {
        links[ch - 'a'] = node;
    }
    
    void increaseEnd()
    {
        countEndWith++;
    }
    
    void increasePrefix()
    {
        countPrefix++;
    }
    
    void deleteEnd()
    {
        countEndWith--;
    }
    
    void reducePrefix()
    {
        countPrefix--;
    }
    
    int getEnd()
    {
        return countEndWith;
    }
    
    int getPrefix()
    {
        return countPrefix;
    }
};
class Trie{
    private: Node* root;
    public:

    Trie(){
        // Write your code here.
        root = new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node* node = root;
        for(int i = 0; i < word.length(); i++)
        {
             if(!node -> containsKey(word[i]))
            {
                node -> put(word[i], new Node());
            }
             node = node -> get(word[i]);
                node -> increasePrefix();
        }
        node -> increaseEnd();
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
         Node* node = root;
         for(int i = 0; i < word.length(); i++)
        {
              if(node -> containsKey(word[i]))
            {
                node = node -> get(word[i]);
            }
            else 
                return 0;
        }
         return node -> getEnd();
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
         Node* node = root;
         for(int i = 0; i < word.length(); i++)
        {
             if(node -> containsKey(word[i]))
            {
                node = node -> get(word[i]);
            }
               else return 0;
        }
         return node -> getPrefix();
    }

    void erase(string &word){
        // Write your code here.
        Node* node = root; 
        
        for(int i = 0; i < word.length(); i++)
        {
            if(node -> containsKey(word[i]))
            {
                node = node -> get(word[i]);
                node -> reducePrefix();
            }
            else return;
        }
        
        node -> deleteEnd();
    }
};
