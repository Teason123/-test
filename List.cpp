#include<iostream>
using namespace std;
#define maxsize 50;
int main()
{
	class List
	{
	public:
		int*data;
		int length;
		List(int a = 0) :length(a) { data = new int[50]; }
		~List() { delete [] data; };
		bool Listempty()
		{
			return(length == 0);
		}
		int Listlength()
		{
			return length;
		}
		void DispList()
		{
			for (int i = 0;i < length;i++)
				cout << data[i] <<" ";
			cout << endl;
			cout << length << endl;
		}
		bool GetList(int a,int&e)
		{
			if (a < 1 || a >= length)
				return false;
			e = data[a];
			return true;
		}
		int LocateList(int a)
		{
			for (int i = 0;i <= length;i++)
			{
				if (data[i] == a)
				{
					return i + 1;
				}
			}
			return 0;
		}
		bool ListInsert(int a,int e)
		{
			if (a<1 || a>length)
				return false;
			a--;
			for (int i = length;i > a;i--)
			{
				data[i] = data[i - 1];
			}
			data[a] = e;
			length++;
		}
		bool DelteList(int a)
		{
			if (a<1 || a>length)
				return false;
			a--;
			for (int i = a;i < length;i++)
			{
				data[i] = data[i+1];
			}
			length--;
			return true;
		}

	};
	List l;
	l.length = 5;
	int x,e;
	for (int i = 0;i < 5;i++)
	{
		cin >> x;
		l.data[i] = x;
	}
	l.DispList();
	l.GetList(4,e);
	l.ListInsert(2, 9);
	l.DispList();
	l.DelteList(2);
	l.DispList();
}