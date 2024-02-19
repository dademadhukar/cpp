#include<iostream>
using namespace std;
class rectangle{
	int l, b;
	public:
		
			rectangle(){
				l=21;
				b=22;
				cout<<"const called"<<endl;
			}
		
	area(){
		int a;
		a=l*b;
		cout<<" area="<<a<<endl;
	}
	rectangle(int x, int y)
	{
		l=x;
		b=y;
		cout<<"i am parameterized const"<<endl;
	}
	rectangle(rectangle &obj)
	{
		l=obj.l;
		b=obj.b;
	}
	
};
main(){
    // rectangle obj;
	rectangle obj1(7,6);
	//rectangle obj2(10);
	//obj2.area();
 	rectangle obj=obj1;
	obj.area();
}

