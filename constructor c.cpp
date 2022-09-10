#include<iostream>
using namespace std;
class BOOK
{
	int year;
	float price;
	public:
		void get(int y1,int p1)
		{
			year=y1; price=p1;
		}
		void show()
		{
			cout<<"year is ="<<year<<endl;
			cout<<"price is ="<<price<<endl;
		}
		
};
main()
{
	int y1,p1;
	cout<<"enter year and price";
	cin>>y1>>p1;
BOOK obj;
obj.get(y1,p1);
obj.show();	
}

