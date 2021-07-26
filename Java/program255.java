// Singly LL in Java


import java.util.*;

class Node
{
    public int data;
    public Node next;

    public Node(int iNo)
    {
        this.data = iNo;
        this.next = null;
    }
}

class SinglyLL
{
    public Node Head;
    public int iSize;

    public SinglyLL()
    {
        this.Head = null;
        this.iSize = 0;
    }

    public void InsertFirst(int no)
    {
        Node newn = new Node(no);
        if(this.Head != null)
        {
            newn.next = Head;
        }
        Head = newn;
        this.iSize++;
    }

    public void InsertLast(int no)
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

    public void DeleteFirst()
    {
        if(this.Head == null)
        {
            return;
        }
        Head = Head.next;
        this.iSize--;
    }

    public void DeleteLast()
    {
        if(iSize == 0)
        {
            return;
        }
        else if(iSize == 1)
        {
            Head = null;
        }
        else
        {
            Node temp = Head;
            while((temp.next).next  != null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        this.iSize--;
    }

    public void InsertAtPos(int data, int pos)
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

    public void DeleteAtPos(int pos)
    {
        if((pos < 1) || (pos > iSize))
        {
            return;
        }
        
        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == iSize)
        {
            DeleteLast();
        }
        else
        {

            Node temp = Head;
            for(int i  = 1; i < pos-1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            iSize--;
        }
    }
}    

class program255 
{
    public static void main(String[] args) 
    {

        Scanner sobj = new Scanner(System.in);
        SinglyLL obj = new SinglyLL();

        int iChoice = 1, no = 0;
        while(iChoice != 0)
        {
            System.out.println("Enter your Choice :");
            System.out.println("1. Insert First");
            System.out.println("2. Insert Last");
            System.out.println("3. Display");
            System.out.println("4. Count");
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
                    System.out.println("Insert the pos :");
                    break;

                case 3:
                    System.out.println("Elements are :");
                    obj.Display();
                    break;
                
                case 4:
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
