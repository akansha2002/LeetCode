class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int> color (n, -1);
        queue<int> q;
        
        
        
        for(int i=0; i<n; i++)
        {
            if(color[i] == -1)
            {
                color[i] = 0;
                q.push(i);
            }
            while(!q.empty())
            {
                int size = q.size();

                while(size-- )
                {
                    int front = q.front();
                    q.pop();

                    for(auto it : graph[front])
                    {
                        if(color[it] == -1)
                        {
                            if(color[front] == 0)
                                color[it]=1;
                            else
                                color[it]=0;

                            q.push(it);
                        }
                        else if( color[it] == color[front])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
        
    }
};