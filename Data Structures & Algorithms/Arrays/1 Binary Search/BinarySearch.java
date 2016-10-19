import java.util.*;
public class BinarySearch 
{
	private int [] arrA;
	private int number;

	public BinarySearch(int [] arrA)
	{
		this.arrA = arrA;
	}
	public Boolean Search(int low,int high, int number)
	{
		if(low>high)
		{
			return false;
		}
		int mid = low + ((high - low) / 2);
		if(arrA[mid]==number)return true;
		else if (arrA[mid]>number) return Search(low,mid-1,number);
		else return Search(mid+1,high,number);
	}

	public static void main(String args[])
	{	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter The Size Of The Array : ");
		int n = sc.nextInt();
		int[] a = new int[n];
		System.out.println("Enter The Elements Of The Array : ");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		System.out.println("Enter The Element To Be Searched : ");
		int s = sc.nextInt();
		BinarySearch sh = new BinarySearch(a);
		System.out.println("The "+ s + " present in array a ??? :" + sh.Search(0, a.length-1, s));

	}

}