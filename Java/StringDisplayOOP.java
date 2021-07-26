import java.util.*;

class StringX
{
    public void Display(String str)
    {
        char arr[] = str.toCharArray();
        for(int i = 0; i < arr.length; i++)
        {
            System.out.println(arr[i]);
        }
    }
}


class program205 
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");

        String str = sobj.nextLine();

        StringX obj = new StringX();
        obj.Display(str);
    }
}