#include<iostream>
using namespace std;
class Abstract
{
	int a,b;
	public:
		int data(int x,int y)
		{
			a=x;
			b=y;
			cout<<"First no:"<<a;
			cout<<"\nSecond no:"<<b<<endl;
			return a+b; 
		}
};
int main()
{
	Abstract ab;
	cout<<ab.data(10,50);

}
