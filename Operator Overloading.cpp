#include<iostream>
using namespace std;

class multiply
{
	int first, second;
	public:
		void getdata(int x, int y)
		{
			first=x;
			second=y;
		}
		void display_data()
		{
			cout<<"first="<<first<<"\n second="<<second<<endl;
		}
		multiply operator*(multiply c);
};
    multiply multiply::operator*(multiply c)
		{
			multiply temp;
			temp.first=first*c.first;
			temp.second=second*c.second;
			return temp;
		}

int main()
{
	multiply obj1, obj2, obj3;
	obj1.getdata(15,44);
	obj2.getdata(54,32);
	obj3=obj1*(obj2);
	obj3.display_data();
	return 0;
}
