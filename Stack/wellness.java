package ds_test;

import java.util.Arrays;
import java.util.Scanner;

public class wellness {
	int MaxSize,tos;
	char s[]=new char[100];
	void inits(int size) {
		tos=-1;
		MaxSize=size;
	}
	void push(char e)
	{
		tos++;
		s[tos]=e;
	}
	int isFull()
	{
		if(tos==MaxSize) 
			return 1;
		else 
			return 0;
	}
	char pop()
	{
		char temp;
		temp=s[tos];
		tos--;
		return temp;
	}
	int isEmpty()
	{
		if(tos==-1)
			return 1;
		else
			return 0;
	}
	char atTop()
	{
		return (s[tos]);
	}
	void Prints()
	{
		for(int i=tos;i>-1;i--)
		{
			System.out.println(s[i]);
		}
	}
	
	@Override
	public String toString() {
		return "ass1 [s=" + Arrays.toString(s) + "]";
	}
	public static void main(String[] args)
	{
		int ch=0,e,size,count=0,count1=0;
		wellness a=new wellness();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter data to check wellness");
		String ins=sc.next();
		size=ins.length();
		a.inits(size);
		char inp;
			for(int i=0;i<size;i++)
			{
				
				inp=ins.charAt(i);
				if(inp=='(' || inp=='[' || inp=='{')
				{
					//push the open brackets untill closing bracket comes

					a.push(inp);
					continue;
				}


				else if(inp==')' || inp==']' || inp=='}')
				{
					//check for "(" closing bracket

					if(inp==')')
					{
						if(a.s[a.tos]=='(')
						{
							a.pop();
						}
						else
						{
							System.out.println("UNBALANCED inpESSION");
							break;
						}
					}


					//check for "{" closing bracket

					if(inp=='}')
					{
						if(a.s[a.tos]=='{')
						{
							a.pop();
						}
						else
						{
							System.out.println("UNBALANCED inpESSION");
							break;
						}
					}

					//check for "[" closing bracket

					if(inp==']')
					{
						if(a.s[a.tos]=='[')
						{
							a.pop();
						}
						else
						{
							System.out.println("UNBALANCED inpESSION");
							break;
						}
					}
				}

			}

		//If s  is empty Then Balanced inpession

			if(a.tos==-1)
			{
			System.out.println("BALANCED inpESSION");
			}

}
}