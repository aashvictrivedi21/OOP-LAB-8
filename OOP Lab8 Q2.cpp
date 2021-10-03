#include<iostream>
#include<math.h>
using namespace std;

class staff
{
	
	protected:
		int code;
		char name[50];
	public:
		void getstaff()
		{
			cout<<"\nEnter the code and name for the staff:"<<endl;
			cin>>code>>name;
		}
		
	};
class Teacher : public staff
{
	protected:
		char subject[30];
		char publication[50];
	public:
		void getteacher()
		{
			cout<<"\nEnter the subject and publication:"<<endl;
			cin>>subject>>publication;
			
		}
		
};
class typist : public staff
{
	protected:
		float speed;
	public :
		void gettypist()
		{
			cout<<"\nEnter the speed for typist:"<<endl;
			cin>>speed;
			
		}
		
		
};
class officer : public staff
{
	protected:
		char grade;
	public:
		void getgrade()
		{
			cout<<"\nEnter the grade"<<endl;
			cin>>grade;
			
		}
		
		
};

class regular : public typist
 {

	
	
};

class casual : public typist
{
	protected:
		float daily_wages;
	public :
		void  getcasual_wages()
		{
			cout<<"\nEnter daily wages:"<<endl;
			cin>>daily_wages;
		}
};

int main()
{
	
regular r1;
casual  c1;
Teacher t1;
officer o1;
cout<<"\nTeacher details:"<<endl;
t1.getstaff();
t1.getteacher();

cout<<"\nOfficer details:"<<endl;
o1.getstaff();
fflush(stdin); // to clear the buffer
o1.getgrade();

cout<<"\nRegular Typist details:"<<endl;
r1.getstaff();
fflush(stdin);
r1.gettypist();

cout<<"\nCasual Typist details:"<<endl;
fflush(stdin);

c1.getstaff();
c1.gettypist();
c1.getcasual_wages();

return 0;
	
}

