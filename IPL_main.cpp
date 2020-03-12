//IPL tournament. Made by Dhiraj Kelhe (11801527).
using namespace std;
#include<iostream>
#include<fstream>
class ipl {
	public:
		void mainmenu();
		void gotomain();
		void champions();
	    void schedule();
		void team_players();
		void other();
		void gotoprev();
		void end();  
};

void ipl :: mainmenu() {
	system("cls");
	string x;
	abc:
		cout<<"Please select from below: \n"<<endl
			<<"1. Schedule"<<endl
			<<"2. Previous Years Champions"<<endl
			<<"3. More"<<endl
			<<"4. Exit\n\n=> ";
		cin>>x;
	if (x=="1") {
		schedule();
		gotomain();
	}
	else if (x=="2"){
		champions();
		gotomain();
	}
	else if (x=="3"){
		other();
		gotomain();
	}
	else if (x=="4"){
		end(); 
	}
	else {
		system("cls");
		cout<<"Invalid input. Please retry.\n\n";
		goto abc;
	}
}

void ipl :: schedule() {
	system("cls");
	int reply;
	char ch;
	fstream f;
   	f.open("Schedule.txt",ios::in);
   	while(1)
   	{
   		ch = f.get();
   		if(ch==EOF)
   		break;
   		cout<<ch;
   }
	f.close();
}

void ipl :: champions() {
	system("cls");		
	char chr2;
	fstream champ;
	champ.open("Champions.txt",ios::in);
	while(1) {
		chr2 = champ.get();
		if(chr2==EOF)
		break;
		cout<<chr2;
	}
}
void ipl :: team_players()  {
	system("cls");
 	ifstream f;
 	string g;
 	char name1,name2,name3,name4,name5,name6,name7,name8;
	m:	
		cout<<"Please Select the Team:\n"<<endl
			<<"1. Mumbai Indians (MI)"<<endl
			<<"2. Chennai Super Kings (CSK)"<<endl
			<<"3. Royal Challengers Banglore (RCB)"<<endl
			<<"4. Kolkata Knight Riders (KKR)"<<endl
			<<"5. Delhi Capitals (DC)"<<endl
			<<"6. Rajasthan Royals (RR)"<<endl
			<<"7. Sunrisers Hyderabad (SRH)"<<endl
			<<"8. Kings XI Punjab (KXIP)\n\n=> ";
		cin>>g;
	if(g=="1") 
	{
		system("cls");
		cout<<"\nMumbai Indians (MI)\n"<<endl;
		f.open("MI.txt");
		while(1){
			name1 = f.get();
			if(name1==EOF)
			break;
			cout<<name1;
		}
		f.close();
		gotoprev();
	}
	else if(g=="2") 
	{
		system("cls");
	    cout<<"\nChennai Super Kings (CSK)\n"<<endl;
		f.open("CSK.txt");
		while(1){
			name2 = f.get();
			if(name2==EOF)
			break;
			cout<<name2;
		}
		f.close();
		gotoprev(); 
	}
	else if(g=="3") 
	{
		system("cls");
		cout<<"\nRoyal Challengers Banglore (RCB)\n"<<endl;
		f.open("RCB.txt");
		while(1) {
			name3 = f.get();
			if(name3==EOF)
			break;
			cout<<name3;
		}
		f.close();
		gotoprev();	
	}	
	else if(g=="4") 
	{
		system("cls");
	    cout<<"\nKolkata Knight Riders (KKR)\n"<<endl;
		f.open("KKR.txt");
		while(1){
			name4 = f.get();
			if(name4==EOF)
			break;
			cout<<name4;
		}
		f.close();
		gotoprev(); 
	}
	else if(g=="5") 
	{
		system("cls");
		cout<<"\nDelhi Capitals (DC)\n"<<endl;
		f.open("DD.txt");
		while(1){
			name5 = f.get();
			if(name5==EOF)
			break;
			cout<<name5;
		}
		f.close();
		gotoprev(); 
	}
	else if(g=="6") 
	{
		system("cls");
		cout<<"\nRajasthan Royals (RR)\n"<<endl;
		f.open("RR.txt");
		while(1){
			name6 = f.get();
			if(name6==EOF)
			break;
			cout<<name6;
		}
		f.close();
		gotoprev(); 
	}
	else if(g=="7") 
	{
		system("cls");
		cout<<"\nSunrisers Hyderabad (SRH)\n"<<endl;
		f.open("SRH.txt");
		while(1){
			name7 = f.get();
			if(name7==EOF)
			break;
			cout<<name7;
		}
		f.close();
		gotoprev(); 
	}
	else if(g=="8") 
	{
		system("cls");
		cout<<"\nKings XI Punjab (KXIP)\n"<<endl;
		f.open("KP.txt");
		while(1){
			name8 = f.get();
			if(name8==EOF)
			break;
			cout<<name8;
		}
		f.close();
		gotoprev(); 
	}
	else {
		cout<<"\nInvalid Input. Please enter valid input.\n";
		goto m;
	} 
}

void ipl :: other(void) {
	system("cls");
	cout<<"\nHere's more about IPL:\n";
	string e;
	ifstream g;
	g.open("IPL");	
	y:
		cout<<"\nPlease Select :\n";
		cout<<"1. Team and Players"<<endl
			<<"2. Umpires"<<endl
			<<"3. Team Coaches"<<endl
			<<"4. Team Owners"<<endl
			<<"5. Stadiums"<<endl
			<<"6. Want to add players?"<<endl
			<<"7. Previous matches records"<<endl
			<<"8. Current Points Table"<<endl
			<<"9. Go to main menu"<<endl
			<<"10. Exit\n\n=> ";
		cin>>e;
	if (e=="1") {
		team_players(); 
	}
	else if (e=="2") {
	   	system("cls");
	    cout<<"Umpires:"<<endl;
		char ump;
		g.open("Umpires.txt");
		while(1){
			ump = g.get();
			if(ump==EOF)
			break;
			cout<<ump;
			} 
		cout<<endl;
		g.close();
		gotoprev(); 
	}
	else if (e=="3") {
		system("cls");
		cout<<"Team Coaches:"<<endl;
		char coach;
		g.open("Coach.txt");
		while(1) {
			coach = g.get();
			if(coach==EOF)
			break;
			cout<<coach;
		}
		cout<<endl;
		g.close();
		gotoprev(); 
	}
	else if (e=="4") {
		system("cls");
		cout<<"Team Owners:"<<endl;
		char owner;
		g.open("Team_owners.txt");
		while(1){
			owner = g.get();
			if(owner==EOF)
			break;
			cout<<owner;
		}
		cout<<endl;
		g.close();
		gotoprev(); 
	}
	else if (e=="5") {
		system("cls");
		cout<<"Stadiums"<<endl;
	    char stadium;
		g.open("Stadiums.txt");
		while(1){
			stadium = g.get();
			if(stadium==EOF)
			break;
			cout<<stadium;
		}
		cout<<endl;
		g.close();
		gotoprev(); 
	}
	else if (e=="6") {
		system("cls");
		cout<<"Add Information About players:\n";
		{
			string a;
			int n;
			x:
			cout<<"\nSelect the team:\n"<<endl
       		 	<<"1. Mumbai Indians (MI)"<<endl
				<<"2. Chennai Super Kings (CSK)"<<endl
				<<"3. Royal Challengers Banglore (RCB)"<<endl
		 		<<"4. Kolkata Knight Riders (KKR)"<<endl
		 		<<"5. Delhi Capitals (DC)"<<endl
				<<"6. Rajasthan Royals (RR)"<<endl
		 		<<"7. Sunrisers Hyderabad (SRH)"<<endl
		 		<<"8. Kings XI Punjab (KXIP)\n\n=> ";
      		cin>>a;
			if(a=="1") 
				{
					system("cls");
					ofstream team("MI.txt",ios::app);
					cout<<"How many players you want to add?\n=> ";
					cin>>n;
					cout<<"Enter player name:\n";
					string membernames;
					for(int i=0;i<=n;i++)
					{
						getline(cin,membernames);
						team<<membernames<<endl;
					}
					team.close();
					cout<<"Added sucessfully\n";
					gotoprev();
				}
			else if(a=="2")
					{	
						system("cls");
						ofstream team("CSK.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else if (a=="3")
					{	
						system("cls");
						ofstream team("RCB.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else if (a=="4")
				   {	
				   		system("cls");
				   		ofstream team("KKR.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else if (a=="5")
					{	
						system("cls");
						ofstream team("DD.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else if (a=="6")
					{	
						system("cls");
						ofstream team("RR.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else if (a=="7")
					{	
						system("cls");
						ofstream team("SRH.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else if (a=="8")
					{	
						system("cls");
						ofstream team("KXIP.txt",ios::app);
						cout<<"How many players you want to add?\n=> ";
	      	       		cin>>n;
						cout<<"Enter player name:\n";
						string membernames;
						for(int i=0;i<=n;i++)
						{
							getline(cin,membernames);
							team<<membernames<<endl;
						}
						team.close();
						cout<<"Added sucessfully\n";
						gotoprev();
					}
			else
					{
						cout<<"\nInvalid value. Please enter valid value:\n\n";
						goto x;
					}
				}
			}
	else if(e=="7") 
	{
		system("cls");
		cout<<"Previous Matches records:\n";
		char records;
		g.open("Previous_Matches.txt");
		while(1){
			records = g.get();
			if(records == EOF)
			break;
			cout<<records;
		}
		cout<<endl;
		g.close();
		gotoprev(); 
	}
	else if (e=="8") 
	{
		system("cls");
		cout<<"\nPoints Table:\n\n";
		char table;
		g.open("points_table.txt");
		while(1){
			table = g.get();
			if(table == EOF)
			break;
			cout<<table;
		}
		cout<<endl;
		g.close();
		gotoprev(); 
	}
	else if (e=="9") 
	{
		mainmenu(); 
	}
	else if (e=="10") 
	{
		end(); 
	}
	else 
	{
			cout<<"\nPlease enter correct value\n";
			goto y;	
	}
}

void ipl :: gotomain() {
	cout<<"\n\nWant to go in main menu?\n1.Yes\nOr press other key (except 1) for Exit.\n\n=> ";
			int op;
			cin>>op;
			if(op==1)
			{
				mainmenu();
			}
			else
			{
				end();
			}
}
void ipl :: gotoprev() {
	cout<<"\n\nWant to go in previous menu?\n1.Yes\nPress any key (except 1) for exit.\n\n=> ";
			int opt;
			cin>>opt;
			if(opt==1)
			{
				other();
			}
			else
			{
				end();
			}
}
void ipl :: end() {
	system("cls");
	cout<<"\n|===================< Thank You >===================|\n\n"
		<<"|===< Made by - Dhiraj Kelhe > < Reg - 11801527 >===|\n";	
	exit(1);
}
int main() {
	cout<<"==============================================< IPL Cricket Tournament >==============================================\n";
	string opt3;
	ipl obj;
	proceed:	
		cout<<"\nWant to proceed further?\n1.Yes\n2.No\n\n=> ";
		cin>>opt3;
	if(opt3=="1" || opt3=="yes" || opt3=="Yes")
	{
		obj.mainmenu();	
	}
	else if(opt3=="2" || opt3=="no" || opt3=="No")
	{
		obj.end();
	}
	else
	{
		cout<<"Invalid input. Please try again.\n";
		goto proceed;
	}
}