package ds_test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class dec_bin {
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
	
	@Override
	public String toString() {
		return "ass1 [s=" + Arrays.toString(s) + "]";
	}
	public static void main(String[] args)
	{
		int size;
		dec_bin a=new dec_bin();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter decimal");
		int no=sc.nextInt();
		List<Integer> arr=new ArrayList<Integer>();
		while(no > 0)
	     {
	       arr.add(no%2);
	      no = no/2;
	     }
		size=arr.size();
		a.initStack(size);
		for(int i=0;i<size;i++)
		{
			a.push(arr.get(i));
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
