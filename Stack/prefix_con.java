package ds_test;

import java.util.Arrays;
import java.util.Scanner;

public class prefix_con {
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
	int prec(char ch)
	{
		if(ch=='+'||ch=='-')
			return (1);
		if(ch=='*' || ch=='/'||ch=='%')
			return (2);
	
		else
			return 0;
	}
	public static void main(String[] args)
	{
		int size,pi;
		String in;
		char c;
		
		prefix_con a=new prefix_con();
		System.out.println("enter infix:");
		Scanner sc=new Scanner(System.in);
		in=sc.next();
		size=in.length();
		char[] pre=new char[size];
		a.initStack(size);
		pi=0;
		for(int i=size-1;i>=0;i--)//right to left
		{
			c=in.charAt(i);
			switch(c)
			{
			case ')':
				a.push(c);
				break;
			case '(':
				while(a.s[a.tos]!=')')
				{
					pre[pi]=a.pop();
					pi++;
					//System.out.println(a.s[0]);
				}
				c=a.pop();
				break;
				
			case '+': case'-':case '*':case '/':
				while((a.isEmpty()!=1 &&  a.prec(c)<a.prec(a.s[a.tos])) )
				{
					pre[pi]=a.pop();
					pi++;
				}
				a.push(c);
				break;
			default:
					pre[pi]=c;
					pi++;
					break;
			}
		}
		while(a.isEmpty()!=1)
		{
			pre[pi]=a.pop();
			pi++;
		}
		for (int i = pre.length - 1; i >= 0; i--) 
		{
	    System.out.print(pre[i]);
		}
	}
}
