package ds_test;

import java.util.Arrays;
import java.util.Scanner;

public class postfix_eval {
	int MaxSize,tos;
	int s[]=new int[100];
	void initStack(int size) {
		tos=-1;
		MaxSize=size;
	}
	void push(int e)
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
	int pop()
	{
		int temp;
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
	int atTop()
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
		int size,pi,num1,num2,ans=0;
		String in;
		char c;
		char[] pre=new char[100];
		postfix_eval a=new postfix_eval();
		System.out.println("enter postfix:");
		Scanner sc=new Scanner(System.in);
		in=sc.next();
		size=in.length();
		a.initStack(size);
		pi=0;
		for(int i=0;i<size;i++)//left to right
		{
			c=in.charAt(i);
			int no=c-'0';
			switch(c)
			{
			case '+': case'-':case '*':case '/':case '%':
				num2=a.pop();
				num1=a.pop();
				 switch(c){
				    case '+':
				        ans=num1 + num2;
				        break;
				    case '-':
				       ans= num1 - num2;
				        break;
				    case '*':
				        ans= num1 * num2;
				        break;
				    case '/':
				        ans=num1 / num2;
				        break;
				    case '%':
				        ans=num1 % num2;
				        break;
				    default:
				        ans=0;
				        break;
				    }
				 a.push(ans);
				 
				break;
				
				default: 
					int a1=c-'0';
					a.push(a1);
					break;
			}
		}
		System.out.println(ans);
	}
}
