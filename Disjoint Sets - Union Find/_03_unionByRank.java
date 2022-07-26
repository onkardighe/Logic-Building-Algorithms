// To Reduce complexity of find
// should be used extra space i.e. rank[]


import java.util.*;
public class _03_unionByRank {
    static int[] parent;
    static int[] rank;
    public static void main(String[] args) {
        
        int n = 6;
        parent = new int[n];
        rank = new int[n];

        // initialise
        for(int  i = 0; i < parent.length; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    public static int find(int x)
    {
        if(parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }

        return parent[x];
    }


    public static void union(int a, int b)
    {
        int rootA = find(a);
        int rootB = find(b);

        if(rank[rootA] == rank[rootB])      // same ranks
        {
            parent[rootB] = rootA;
            rank[rootA]++;
        }
        else if(rank[rootA] < rank[rootB])
        {
            parent[rootA] = rootB; 
        }
        else
        {
            parent[rootB] = rootA;
        }
    }
}
