//  Kruskal's Algorithm => To find Minimum Spannig Tree in a graph


import java.util.*;
class Pair implements Comparable<Pair>
{
    int src, dest, wt;
    public Pair(int _src, int _dest, int _wt)
    {
        this.src = _src;
        this.dest = _dest;
        this.wt = _wt;
    }
    
    public int compareTo(Pair that)
    {
        return this.wt-that.wt;
    }
}

public class _04_krusklsAlgorithm_MST
{
    static int[] parent, rank;
    public static void main(String[] args) {
        int[][] edgesArr = {
            {0, 1, 5},
            {1, 2, 3},
            { 0, 2, 1}
        };

        int V = 3;
        parent = new int[V];
        rank = new int[V];
        
        // initialise ranks and parents
        for(int i = 0; i < V; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }

        ArrayList<Pair> edges = new ArrayList<>();
        
        // converting adj to edges ArrayList<Pair>
        for(int src = 0; src < V; src++)
        {
            int[] e = edgesArr[src];
            int dest = e[0];
            int wt = e[1];
            edges.add(new Pair(src, dest, wt));
        }
        
        
        // Sorting the edges
        Collections.sort(edges);

        // picking edges one by one
        int ans = 0;
        int iCnt = 0;
        for(Pair p : edges)
        {
            if(iCnt >= V-1)
            {
                break;
            }
            
            int srcRoot = find(p.src);
            int destRoot = find(p.dest);
            
            if(srcRoot != destRoot)
            {
                union(srcRoot, destRoot);
                iCnt++;
                ans += p.wt;
                System.out.println(p.src+" "+p.dest+" "+p.wt);
            }
        }

        System.out.println("Total Weight : "+ans);
    }

    static int find(int x)
    {
        if(parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    static void union(int a, int b)
    {
        int rootA = find(a);
        int rootB = find(b);
        
        if(rank[rootA] < rank[rootB])
        {
            parent[rootA] = rootB;
        }
        else if(rank[rootA] > rank[rootB])
        {
            parent[rootB] = rootA;
        }
        else        // Both ranks are equal
        {
            parent[rootB] = rootA;
            rank[rootA]++;
        }
    }
}
