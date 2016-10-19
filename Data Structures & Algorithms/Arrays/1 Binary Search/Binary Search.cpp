#include<iostream>
using namespace std;
class BinarySearch 
{
	private: 
	int arrA[];
	int number;

	public:
	BinarySearch(int arrA[])
	{
		this->arrA = arrA;
	}

	bool Search(int low,int high, int number)
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
}
	int main()
	{	
		
		cout<<"Enter The Size Of The Array : ";
		int n;
		cin>>n;
		int a[n];
		cout<<"Enter The Elements Of The Array : ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		System.out.println("Enter The Element To Be Searched : ");
		int s;
		cin>>s;
		BinarySearch sh;
		cout<<"The "<<s<<" present in array a ??? :"<<sh.Search(0,n-1, s);
		return 0;

	}
