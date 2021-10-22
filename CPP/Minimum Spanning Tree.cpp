//     Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
        vector<int> key(n, INT_MAX);
        vector<int> mst(n,0);
        vector<int> parent(n,-1);
        key[0]=0;
         int sum=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(pq.size())
        {
            
            int taken=pq.top().second;
            pq.pop();
            mst[taken]=1;
            
            for(auto it: adj[taken])
            {
                int node=it[0];
                int w=it[1];
                if(mst[node]==0 && w<key[node])
                {
                    parent[node]=taken;
                    key[node]=w;
                    pq.push({key[node], node});
                }
            }
            
        }
       sum=accumulate(key.begin(),key.end(),0);
        return sum;
    }
