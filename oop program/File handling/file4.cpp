//Ramdom access to file
#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
		char name[25];
		int rollno;
	public:
		void read()
		{
			cout<<"\n Enter Name:";
			cin>>name;
			cout<<"\n Enter Roll no:";
			cin>>rollno;
			cout<<endl;
		}
		void show()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll No.: "<<rollno<<endl;
		}
};
void write2file() 
{
	student s;
	ofstream ofile("File4.dat",ios::binary|ios::app);
	s.read();
	ofile.write((char*)&s,sizeof(s));
}
void readfromfile()
{
	student s;
	cout<<"\n Data from file: "<<endl;
	ifstream infile("File4.dat",ios::binary);
	while(!infile.eof())
	{
		if(infile.read((char*)&s,sizeof(s))>0)
		    s.show();
	}
}
void read1Record()
{
	student s;
	int n;
	ifstream infile("File4.dat",ios::binary);
	cout<<"\n Enter record number: ";
	cin>>n;
	infile.seekg((n-1)*sizeof(s));
	infile.read((char*)&s, sizeof(s));
	s.show();
}
int main()
{
	int choice;
	cout<<"Student record system: "<<endl;
	cout<<"Select any one option: "<<endl;
	cout<<"1 to write record to file: "<<endl;
	cout<<"2 to read record from file: "<<endl;
	cout<<"3 to read particular record from file: "<<endl;
	cout<<"4 to Exit record to file: "<<endl;
	while(true)
	{
		cout<<"\n Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				write2file();
				break;
			case 2:
				readfromfile();
				break;
			case 3:
				read1Record();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Choice not available!";
		}
	}
}