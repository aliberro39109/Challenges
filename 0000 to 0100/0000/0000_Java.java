import java.util.Scanner;
public class Main
{
	public static void main(String[] args)
	{
	    int n;
	    String str1;
      Scanner myInput = new Scanner( System.in );
      do
	    {
          n = myInput.nextInt();
	    } while(n<=0);
	    myInput.nextLine();
	    str1 = myInput.nextLine();
	    StringBuilder str = new StringBuilder(str1);

    	for(int i=0;i<n;i++)
    	{
    		if(str.charAt(i) >='a' && str.charAt(i) <= 'z')
    		{
    			str.setCharAt(i,(char)((str.charAt(i)+3-'a')%26+'a'));
    		}
    		else if (str.charAt(i) >='A' && str.charAt(i) <= 'Z')
    		{
    			str.setCharAt(i,(char)((str.charAt(i)+3-'A')%26+'A'));
    		}
    	}
    	System.out.println(str);
	}
}
