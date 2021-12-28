 import java.util.*;
public class Deque
{
static int size=5,front=size,rear=size;
static int Q[],i;
static Scanner sc;
public static void insert(int ele)
{
if (rear==0)
{
System.out.println("Full");
}
else
{
if (front==size)
{
front--;
}
Q[--rear]=ele;
}
}
public static void delete()
{
   if (front==size||front<rear)
   {
   System.out.println("Empty");
   }
else
{
System.out.println("Deleted is :"+Q[front]);
if (front==rear)
{
front=rear=size;
}
else
front--;
}
}
public static void display()
{
if (front==size)
{
System.out.println("Empty");
}
else
{
System.out.println("Elements are.....");
for(i=front;i>=rear;i++)
{
System.out.println(Q[i]);
}
}
}
public static void main(String[] args)
{
int ch,ele;
sc=new Scanner(System.in);
Q=new int[size];
do
{
System.out.println("Menu is 1.insert 2.delete 3.display");
ch=sc.nextInt();
switch(ch)
{
case 1:System.out.println("Enter the element");
  ele=sc.nextInt();
  insert(ele);
  break;
case 2:delete();
  break;
case 3:display();
  break;
}
}while(ch<=3);
}
}


