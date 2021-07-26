// Accept TWO strings from user & Check if they are ANAGRAM or NOT
// FINAL CODE OF ANAGRAM
// MORE OPTIMISED WAY
// o(n)



// "abcde"     "cebad"
// "hello"      "loleh"
// "india"      'iinda'

import java.util.*;
class StringX
{
    boolean CheckAnagram(String str1, String str2)
    {
        int i = 0;
        int count[] = new int[26];

        if(str1.length() != str2.length())
        {
            return false;
        }
        else
        {
            char arr[] = str1.toCharArray();
            char brr[] = str2.toCharArray();

            for(i = 0; i < arr.length; i++)
            {
                count[arr[i] - 'a']++;
                count[brr[i] - 'a']--;
            }
            for(i = 0; i<26; i++)
            {
                if(count[i] != 0)
                {
                    break;
                }
            }
            if(i == 26)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
class program209
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String");
        String str1 = sobj.nextLine();
        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();
        boolean bRet = obj.CheckAnagram(str1, str2);
        if(bRet == true)
        {
            System.out.println("Strings are ANAGRAM");
        }
        else
        {
            System.out.println("Strings are NOT ANAGRAM");
        }


    }
}