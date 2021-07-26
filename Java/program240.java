import java.util.*;

class program240
{
    public int Arr[];

    public program240(int iSize)
    {
        Arr = new int[iSize];

    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elements :");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

    }

    public void Display()
    {
        System.out.println("Elements in Array are :");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }

}
class program240
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of elements ");
        int no = sobj.nextInt();

        MarvellousArray obj = new MarvellousArray(no);
        obj.Accept();
        obj.Display();
    
    }
}

