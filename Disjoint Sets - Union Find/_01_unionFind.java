
import java.util.*;

public class _01_unionFind
{

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


    public static int find(int x)
    {
        if(parent[x] != x)
        {
            return find(parent[x]);
        }

        return x;
    }

    public static void union(int a, int b)
    {
        int x = find(a);
        int y = find(b);

        if(x == y)      // already having in same set
        {
            return;
        }

        parent[y] = x;      // randomly assigning 
    }
}