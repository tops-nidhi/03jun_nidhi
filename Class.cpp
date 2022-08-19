#include<iostream>
using namespace std;
class Data
{
	protected:
		int no;
	public:
	int showdata()
	{
		no=10;
		cout<<"No is:"<<no;
	}
};
int main()
{
	Data d1;
	d1.showdata();	
}
