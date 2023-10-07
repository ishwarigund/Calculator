#include<iostream>
using namespace std;
class mycalc
{
	int a,b;
	public:
		void input();
		int add();
		int sub();
		int mul();
		int cal();
};

void mycalc::input()
{
	cout<<"enter value of a,b"<<endl;
	cin>>a>>b;
}

int mycalc::add()
{
	int c;
	c=a+b;
	return c;
}
int mycalc::sub()
{
	int c;
	c=a-b;
	return c;
}
int mycalc::mul()
{
	int c;
	c=a*b;
	return c;
}

int mycalc::cal()
{
	int c;
	c=a/b;
	return c;
}

int main()
{
	mycalc ob;
	int ch,c;
	while(1)
	{
		cout<<"1 Addition"<<endl;
		cout<<"2 Substraction"<<endl;
		cout<<"3 Multiplication"<<endl;
		cout<<"4 Division"<<endl;
	  cout<<"enter your choice"<<endl;
	  cin>>ch;
	   switch(ch)
	   {
	   	   case 1: ob.input();
	   	           c=ob.add();
	   	           cout<<"Addition="<<c<<endl;
	   	           break;
	   	           
	   	  case 2: ob.input();
	   	           c=ob.sub();
	   	           cout<<"Substraction="<<c<<endl;
	   	           break;
	   	           
	   	  case 3: ob.input();
	   	           c=ob.mul();
	   	           cout<<"Multiplication="<<c<<endl;
	   	           break;
	   	           
	   	  case 4: ob.input();
	   	           c=ob.cal();
	   	           cout<<"Division="<<c<<endl;
	   	           break;
	   }
	}
	
}
