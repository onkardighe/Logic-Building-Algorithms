import java.util.*;

class Mathematics
{
    int Addition(int x, int y)
    {
        return x+y;
    }
}

class program196 
{
    public static void main(String[] args) 
    {
        int no1, no2, ans;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First Number :");
        no1 = sobj.nextInt();
        System.out.println("Enter Second Number :");
        no2 = sobj.nextInt();

        Mathematics mobj = new Mathematics();


        ans = mobj.Addition(no1,no2);

        System.out.println("Addition is : "+ans);
    }
    
}
