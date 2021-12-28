import java.util.*;
public class PQ
{
    static Node front,rare,p;
	static Scanner s;
	static class Node
	{
	     int data;
		 int pri;
		 Node next;
		 Node(int data,int pri)
		 {
		     this.data=data;
			 this.pri=pri;
		}
	}
	public static void insert(int ele,int pri)
	{
	     Node temp=new Node(ele,pri);
		 p=front;
		 if((front==null)||(pri<front.pri))
		{
		     temp.next=p;
			 front=rare=temp;
		}
		else
		{
		     while(p.next!=null && p.next.pri<=pri)
			 {
			     p=p.next;
			}
			temp.next=p.next;
			p.next=temp;
		}
	}
    }
	public static void delete()
	{
		if(front==null)
		{
			System.out.println("queue is empty");
		}
		else
		{
			System.out.println("deleted is"+front.data);
				         front=front.next;
		}
   }
    public static void display()
	{
		if(front==null)
		{
			System.out.println("list is empty");
		}
		else
		{
			p=front;
			System.out.println("the elements are");
			while(p!=null)
			{
				System.out.println(p.data+"->");
				p=p.next;
			}
		}
	}
	public static void main(String args[])
     {
		s=new Scanner(System.in);
		int ch,ele,pri;
		do
		{
			System.out.println("menu is 1.enqueue  2.dequeue  3.display ");
			ch=s.nextInt();
			switch(ch)
			{
				case 1 :System.out.println("enter element");
				         ele=s.nextInt();
						 System.out.println("enter priority");
						 pri=s.nextInt();
						 insert(ele,pri);
						 break;
				case 2 :delete();
				         break;
				case 3 :display();
                         break;
			}
		}while(ch<=3);
	}
}