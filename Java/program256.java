// Singly LL in Java
// Generic

import java.util.*;

class Node<T>
{
    public T data;
    public Node next;

    public Node(T iNo)
    {
        this.data = iNo;
        this.next = null;
    }
}

class SinglyLL<T>
{
    public Node Head;
    public int iSize;

    public SinglyLL()
    {
        this.Head = null;
        this.iSize = 0;
    }

    public void InsertFirst(T no)
    {
        Node newn = new Node(no);
        if(this.Head != null)
        {
            newn.next = Head;
        }
        Head = newn;
        this.iSize++;
    }

    public void InsertLast(T no)
    {
        Node newn = new Node(no);

        if(Head == null)
        {
            Head = newn;
        }
        else
        {
            Node temp = this.Head;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        } 
        this.iSize++;

    }

    public int Count()
    {
        return this.iSize;
    }

    public void Display()
    {
        Node temp = this.Head;
        while(temp != null)
        {
            System.out.print("| "+temp.data+" | -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public void InsertAtPos(T data, int pos)
    {
        if((pos < 1) || (pos > iSize+1))
        {
            return;
        }
        
        if(pos == 1)
        {
            InsertFirst(data);
        }
        else if(pos == iSize+1)
        {
            InsertLast(data);
        }
        else
        {
            Node newn  = new Node(data);

            Node temp = Head;
            for(int i  = 1; i < pos-1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
            iSize++;
        }
    }
}    

class program256
{
    public static void main(String[] args) 
    {

        Scanner sobj = new Scanner(System.in);
        SinglyLL <Integer>obj = new SinglyLL<Integer>();

        int iChoice = 1, no = 0, iPos = 0;
        while(iChoice != 0)
        {
            System.out.println("Enter your Choice :");
            System.out.println("1. Insert First");
            System.out.println("2. Insert Last");
            System.out.println("3. Insert At Position");
            System.out.println("4. Display");
            System.out.println("5. Count");
            System.out.println("0. Exit the Application");

            iChoice = sobj.nextInt();

            switch(iChoice)
            {
                case 1:
                    System.out.println("Enter Number :");
                    no = sobj.nextInt();
                    obj.InsertFirst(no);
                    break;
                
                case 2:
                    System.out.println("Enter Number :");
                    no = sobj.nextInt();
                    obj.InsertLast(no);
                    break;

                case 3:
                    System.out.println("Enter Number :");
                    no = sobj.nextInt();
                    System.out.println("Enter position :");
                    iPos = sobj.nextInt();
                    obj.InsertAtPos(no, iPos);
                    break;
                
                case 4:
                    System.out.println("Elements are :");
                    obj.Display();
                    break;
                
                case 5:
                    no = obj.Count();
                    System.out.println("Elements in LL are : "+no);
                    break;
                
                case 0:
                    System.out.println("Thank You For using the Application !");
                    break;
                
                default:
                    System.out.println("Invalid ! Enter Again !!");
                    break;
            }
            
        }

        
    }    
}
