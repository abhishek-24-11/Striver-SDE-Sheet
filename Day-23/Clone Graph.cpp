/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/

void dfs(graphNode* node,graphNode* root,vector<graphNode*> &visited){
    for(auto ele:node->neighbours){
        if(visited[ele->data]==NULL){
            graphNode* newNode=new graphNode(ele->data);
            visited[ele->data]=newNode;
            (root->neighbours).push_back(newNode);
            dfs(ele,newNode,visited);
        }
        else (root->neighbours).push_back(visited[ele->data]); // bcoz 
    }
}

graphNode *cloneGraph(graphNode *node)
{
    // Write your code here.
    if(node == NULL) {
        return node;
    }
    vector<graphNode*> visited(100005,NULL);
    graphNode* copy = new graphNode(node->data);
    visited[node->data] = copy;
    dfs(node,copy,visited);
    return copy;
        
}
