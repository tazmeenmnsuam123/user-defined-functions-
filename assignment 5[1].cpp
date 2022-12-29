#include<iostream>
using namespace std;
void F1();         // no argument is passed to F1()
int F2();          // no argument is passed to F2()
void F3(int num);// argument is passed to F3()
int F4(int num); //argument is passed to F4()
int main()
{
    F1();
    int num;
    num=F2();
    F3(num);
    F4(num);
    return 0;
}
void F1()
	{
		int num;
		
	
	    cout<<"Enter a number: "<<endl;
        cin >> num;
        if(num%2==0)
		cout<<"This number is even:"<<num<<endl;
		else
		cout<<"This number is odd:"<<num<<endl;
	}
	int F2()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin >> num;
    if(num%2==0)
	cout<<"This number is even:"<<num<<endl;
	else
	cout<<"This number is odd:"<<num<<endl;
    return num;
}
void F3(int num)
{ 
    cout<<"Enter a number: "<<endl;
    cin >> num;
    if (num%2==0)
    cout << "This number is even:"<< num<<endl;
    else 
    cout << " This number is odd:"<< num <<endl;
}
    int F4(int num)
{
	cout<<"Enter a number: "<<endl;
    cin >> num;
	if (num%2==0)
    cout << " This number is even:"<< num<<endl;
    else 
    cout << " This number is odd:"<< num<<endl;
    return 0;
}

