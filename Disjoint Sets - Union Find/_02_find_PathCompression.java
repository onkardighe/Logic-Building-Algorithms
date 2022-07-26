// Path compression takes place in find method 

// Linear Time Complexity (Nearly) => For find operation


public class _02_find_PathCompression {
    static int[] parent;
    public static void main(String[] args) {
        
        int n = 6;
        parent = new int[n];

        // initialise
        for(int  i = 0; i < parent.length; i++)
        {
            parent[i] = i;
        }

    }


    // Path Compression Find
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

        if(rootA == rootB)
        {
            // already same
            return ;
        }
        parent[rootB] = rootA;      // Randomly Assigning
    }
}
