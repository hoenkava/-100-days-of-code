#include <iostream>
using namespace std;


int main() {
	int age;
	int ageTotal = 0;
	int howManyPeopleEntered= 0;
	cout<<"Enter First person age or -1 to quit" <<endl;
	cin>>age;
	while(age!=-1)
	{
		ageTotal = age + ageTotal;
		howManyPeopleEntered++;
		cout<<"Next person age or -1 to quit"<<endl;
		cin>>age;
	}
	cout<<"How many people entered: "<<howManyPeopleEntered<<endl;
	cout<<"Average Age: "<<ageTotal/howManyPeopleEntered;
	return 0;
}
