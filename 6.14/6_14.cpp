#include<iostream>
const int Max=5;
int main()
{
	using namespace std;
	int golf[Max];
	cout<<"Please enter you golf\n";
	cout<<"you must enter"<<Max<<"round.\n";
	for(int i=0;i<Max;i++)
	{
		cout<<"round#"<<i+1<<":";
		while(!(cin>>golf[i])){
			cin.clear();
		while(cin.get()!='\n')
			continue;
		cout<<"Please enter a number:";
		}
	}
	double total=0.0;
	for(int i=0;i<Max;i++)
		total+=golf[i];
	cout<<total/Max<<"average:"<<Max<<endl;
	return 0;
}