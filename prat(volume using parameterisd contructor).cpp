#include<iostream>
using namespace std;
class volume
{
	int length,breath,height;
	public:
		volume(int l, int b, int h)
		{
			length=l; breath=b; height=h;
		}
		void v()
		{
			cout<<length*breath*height;    //this-> for same variable
		}
};
main()
{
	class volume obj(7, 8, 9);  // parameterised constructor 
	obj.v();
}
