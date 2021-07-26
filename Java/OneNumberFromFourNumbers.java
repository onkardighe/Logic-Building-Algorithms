// Design one helper Function that accept that 4 Numbers and generate one single number
import java.util.*;

class Binary
{
    public int BPacking(int arr[])
    {
        int iPacked = 0;
        for(int i = 0; i <4; i++)
        {
            iPacked = iPacked <<8;
            iPacked = iPacked | arr[i];
        }
        return iPacked;
    }

    public void BUnpacking(int iPacked)
    {
        int no1, no2, no3, no4;
        int iMask = 255;
        for(int i = 0; i < 4; i++)
        {
            System.out.println("Number "+(i+1)+" : ");
            System.out.println(iPacked & iMask);        // 1 & 0 = 0          0 & 0 = 0
            iPacked = iPacked>>8;                        //    ^ iMask            ^ iMask
        }
    }
}


class IPPackUnpack
{
	public int Packing(int no1, int no2, int no3, int no4)
	{
		return (no1<<24) | (no2<<16) | (no3<<8) | no4;
	}

    public void Unpacking(int no)
    {
        int no1, no2, no3, no4;
        no1 = no & 0x000000ff;
        no2 = no>>8;
        no2 = no2 & 0x000000ff;
        no3 = no>>16;
        no3 = no3 & 0x000000ff;
        no4 = no>>24;
        System.out.println("First Number :"+no1);
        System.out.println("Second Number :"+no2);
        System.out.println("Third Number :"+no3);
        System.out.println("Fourth Number :"+no4);
    }
}



class program212
{
	public static void main(String[] args)
	{
		int arr[] = new int[4];
		int iRet = 0;

		Scanner sobj = new Scanner(System.in);


		// System.out.println("Enter First Number :");
		// int no1 = sobj.nextInt();
		// System.out.println("Enter Second Number :");
		// int no2 = sobj.nextInt();
		// System.out.println("Enter thirst Number :");
		// int no3 = sobj.nextInt();
		// System.out.println("Enter Fourth Number :");
		// int no4 = sobj.nextInt();

        // IPPackUnpack obj = new IPPackUnpack();
        // iRet = obj.Packing(no1,no2,no3,no4);
        // System.out.println("Packing : "+iRet);
        // obj.Unpacking(iRet);

        // System.out.println("Enter Values :");
        // for(int i = 0; i < 4; i++)
        // {
        //     arr[i] = sobj.nextInt();
        // }

        Binary obj = new Binary();
        iRet = obj.BPacking(arr);
        System.out.println("Packed Number is :"+iRet);
        obj.BUnpacking(iRet);

	}
}

