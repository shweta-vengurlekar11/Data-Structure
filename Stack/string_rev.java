package ds_test;

import java.util.Arrays;
import java.util.Scanner;

public class string_rev {
	int MaxSize,tos;
	char s[]=new char[100];
	void initStack(int size) {
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
	void PrintStack()
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
		string_rev a=new string_rev();
		System.out.println("enter name");
		Scanner sc=new Scanner(System.in);
		String s1=sc.next();
		size=s1.length();
		a.initStack(size);
			
			for(int i=0;i<s1.length();i++)
			{
				if(a.isFull()==1)
				{
					System.out.println("stack is full");
				}
				else
				a.push(s1.charAt(i));
			}
			for(int i=a.tos;i>-1;i--)
			{
				
				if(a.isEmpty()==1)
				{
					System.out.println("stack empty");
				}
				else
				{
				System.out.print(a.pop());
				
				}
			}
	}

}
