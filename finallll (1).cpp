#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class MenuAndPrice
{
	protected:
		int Fast_food_price[5]={200,260,290,300,1500};
		int Chicken_Pizza[4]={350,500,900,1180};
		int Vegetable_Pizza[4]={200,460,870,1100};
		int National_Food_price[8]={300,280,290,230,350,320,348,20};
		int Continental_food_price[10]={310,280,340,290,380,310,325,210,320,360};
		int Dessert_price[6]={150,1500,260,450,1000,1200};
		int Super_Deal_price[7]={450,380,1200,530,900,530,2300};
		friend void Deal_price(int a, int b, char c[80], int d);
		string Super_Deals[7]=
		{
			"Deal 1:\t Spicy Zinger Burger, 6pc of nuggets and regular fries                           450Rs",
			"Deal 2:\t Two Veg Burgers with fries                                                      380Rs",
			"Deal 3:\t 2 Zinger Burger + 2 chicken burger + 2 regular fries + 4 soft drinks 300ml     1200Rs",
			"Deal 4:\t 2 Zinger burger + 2 soft drinks 300ml                                           530Rs",
			"Deal 5:\t 3 zinger burger + 2 small cheese pizza                                          900Rs",
			"Deal 6:\t 3 cheese burger + 2 small cheese pizza + 1 medium vegetable pizza               530Rs",
			"Deal 7:\t 5 cheese burger + 2 medium pizza + 4 soft drinks 300ml + 1 regular fries       2300Rs",
		};
		
		string Fast_foods[7]=
		{
			"1.cheese sandwich       200Rs",
			"2.hamburgers            260Rs",
			"3.Zinger burger         290Rs",
			"4.cheese burger         300Rs",
			"5.Veg Burger            150Rs",
			"6.Cheese pizza\n\t\tsmall\t350Rs\n\t\tmedium\t500Rs\n\t\tlarge\t900Rs\n\t\tExtra\tlarge1180Rs",
			"7.vegetable pizza\n\t\tsmall\t300Rs\n\t\tmedium\t460Rs\n\t\tlarge\t870Rs\n\t\tExtra\tlarge1180Rs"                
		};
		
		string National_Food[8]=
		{
			"1.Qurma                300Rs",
			"2.Biryani              280Rs",
			"3.Qeema                290Rs",
			"4.Chole                230Rs",
			"5.Veg Handi            350Rs",
			"6.Chicken Kadhai       320Rs",
			"7.Chicken Tandoori     340Rs",
			"8.Naan                  20Rs",
		};
		
		string Continental_Food[10]={
		"1.Sweet Potato Pie                                  310Rs",
		"2.Chicken and Cheese salad                          280Rs",
		"3.Butter Fried Fish with Cheese sauce               340Rs",
		"4.Baked Vegetables                                  290Rs",
		"5.Honey Roast Chicken                               380Rs",
		"6.Grilled Chicken                                   310Rs",
		"7.Chicken Salad                                     325Rs",
		"8.Fried Rice                                        210Rs",
		"9.Fish Mayonnaise                                   320Rs",
		"10.Grilled Vegetable Capachio                       360Rs",
		};
		
		string Dessert[6]=
		{
			"\t1.Onigiri                            150Rs",
			"\t2.Pecan Pie Cheesecake              1500Rs",
			"\t3.Sheer Qoorma                       260Rs",
			"\t4.Rabri                              450Rs",
			"\t5.Brownie                           1000Rs",
			"\t6.Pineapple Cake                    1200Rs",
		};
};

void Deal_price(int a,int b,char c[80],int d )
{
		MenuAndPrice finalstage;
		if(a==3 && b>7){
		
		b=b-1;
		cout<<endl<<c<<"!Thanks for placing order,Your bill is :\t"<<finalstage.National_Food_price[b]*d<<"Rs.";
	    }
	    else if (a==1 && b<6 &&b>0)
	    {
	    	b=b-1;
	    	cout<<endl<<endl<<c<<"!Thanks for placing order , Your bill is :\t"<<finalstage.Super_Deal_price[b]*d<<"Rs.";
	    	
		}
		else if (a==1 && b<5 &&b>0)
		{
	    	b=b-1;
	    	cout<<endl<<endl<<c<<"!Thanks for placing order , Your bill is :\t"<<finalstage.Super_Deal_price[b]*d<<"Rs.";
	    	
		}
		else if (a==2 && b==6)
		{
			int f;
			   cout<<"\n\n Chicken Pizza:\n\n";
			   cout<<"\t\t1.small\t 350Rs\n\t\t2.medium\t460Rs\n\t\t3.large\t870Rs\n\t\t4.Extra Large\t 1100Rs";
			   cout<<"\n\n Select size \t";
			   cin>>f;
			   f=f-1;
			   cout<<endl<<endl<<c<<"! Thanks for placing your order ,Your bill is \t"<<finalstage.Chicken_Pizza[f]*d<<"Rs";
			   
			   
			   
		}
		else if (a==2 && b==7){
			int f;
			cout<<"\n\n Vegetable pizz\n\n";
			cout<<"\t\t1.small\t300Rs\n\t\t2.medium\n\t\t3.large\n\t\t4.extra pizza\t 1100Rs";
			cout<<"\n\nSelect the size\t";
			cin>>f;
			f=f-1;
			cout<<"Thanks for placing order ,Your bill is \t"<<finalstage.Vegetable_Pizza[f]*d<<"Rs";
			
		}
		else if (a==4 &&b<10&&b>0)
		{
			b=b-1;
		cout<<endl<<endl<<c<<"!Thanks for placing order,Your Order is \t"<<finalstage.Continental_food_price[b-1]*d<"Rs";
		}
		else if(a==5 && b<6 && b>0)
		{
			b=b-1;
		cout<<endl<<endl<<c<<"!Thanks for placing order,Your Order is \t"<<finalstage.Dessert_price[b-1]*d<<"Rs";
		}
	    cout<<endl<<c<<"Your order will be delivered to you in 40 minutes ";
}
void Signing(char name[100],char address[1000])
{
   	    int k=0;
   	    char c;
   	    int g;
   	    string email;
   	    char Password[8];
   	    ofstream outfile;
   	    outfile.open("userdata.txt",ios::out|ios::in|ios::app );
   	    outfile<<"name.txt\t"<<name<<endl;
   	    cin.ignore();
   	    outfile<<"Hostel Name:\t"<<address<<endl;
   	    outfile.close();
   	    do{
   	    	cout<<endl<<"Do you already have an account {y//n}:\t";
   	    	cin>>c;
   	        if(c=='y'||c=='Y')
   	    	{
   	    		cout<<endl<<"enter your email please :\t";
   	    		cin>>email;
   	    	ofstream outfile;
   	    	outfile.open("userdata.txt",ios::out | ios::in | ios::app);
   	    	outfile<<"Email:\t"<<email<<endl;
   	        outfile.close();
   	        cout<<endl<<"Enter your password please :\t";
   	        cin>>Password;
   	        fstream file;
   	        outfile.open("user.txt",ios::out | ios::in | ios::app);
   	        outfile<<"Password:\t"<<Password<<endl;
   	        outfile.close();
   	        g=2;
   	        }
   	        else if(c=='n'||c=='N')
   	    	{
   	    		cout<<endl<<"Create your account!\t";
   	    		cout<<endl<<"Enter your email id: ";
   	    		cin>>email;
   	    	ofstream outfile;
   	    	outfile.open("userdata.txt",ios::out|ios::in|ios::app);
   	    	outfile<<"Email:\t"<<email<<endl;
   	        outfile.close();
   	        cout<<endl<<"Enter your password please :\t";
   	        cin>>Password;
   	        fstream file;
   	        outfile.open("user.txt",ios::out|ios::in|ios::app);
   	        outfile<<"Password:\t"<<Password<<endl;
   	        outfile.close();
   	        g=2;
		   	}
		   	if(g!=2)
		   	{
		   		cout<<endl<<"Invalid input";
			}
		}while(g!=2);
//void feedback();
}

class SuperDealsList:public MenuAndPrice
{
		public:
			void printList()
			{
				cout<<endl<<"\tthanks for selecting the super deals category\n\n";
				for(int i=0;i<7;i++)
				{
					cout<<Super_Deals[i];
					cout<<endl;
				}
			}
};
	
void feedback(char name[80])
{
	char y;
	cout<<endl<<endl<<"Dear"<< name <<"do you have any suggestion for us?(y\\n):\t";
	cin>>y;
	if(y=='y'){
		string email;
		char feedback[100000];
		cout<<"\n\n\tEnter your email id: \t";
		cin>>email;
		cout<<endl<<endl<<"please write down your suggestion:\t";
		cin.ignore();
		cin.getline(feedback,1000);
		ofstream outfile;
		outfile.open("Feedback.txt",ios::out|ios::in|ios::app);
		outfile<<"name:\t"<<name<<endl<<"email:"<<email<<endl<<"suggestion:\t"<<feedback<<endl<<endl;
		outfile.close();
		cout<<endl<<endl<<"dear"<<name<<"! thanks for your suggestion we will work on it soon";
	}
	else{
		cout<<endl<<endl<<name<<"!thanks for using our app\n\n We are hoping to see you back soon";	
	}
}
class FastFood:public MenuAndPrice
{
	public:
	void printList()
	{
		cout<<endl<<"\tThanks for selecting the fast food category\n\n";
		for(int i=0;i<7;i++)
		{
			cout<<Fast_foods[i];
			cout<<endl;
		}
	}
};

class NationalFooD:public MenuAndPrice
{
	public:
		void printList()
		{
			cout<<endl<<"\tThanks for selecting the national food category\n\n";
			for(int i=0;i<8;i++)
			{
				cout<<National_Food[i];
				cout<<endl;
				
			}
			
		}
};

class ContinentalFooD:public MenuAndPrice
{
	public:
		void printList()
		{
			cout<<endl<<"\tThanks for selecting the continental food category\n\n";
			for(int i=0;i<10;i++)
			{
				cout<<Continental_Food[i];
				cout<<endl;
			}
			
		}
};

class DessertLIST:public MenuAndPrice
{
	public:
	void printList(){
		cout<<endl<<"\tThanks for selecting the Dessert category\n\n";
		for(int i=0;i<6;i++)
		{
			cout<<Dessert[i];
			cout<<endl;
		}
	}
};

void menu(char a[80])
{
	cout<<endl<<"Dear "<<a<<"! Welcome to Mukteshwari Restaurant: ";
	
	cout<<endl<<"We have the following food categories available for you"<<a<<endl;
	cout<<endl<<endl<<"\t1. Super Deals!";
	cout<<endl<<"\t2. Fast food";
	cout<<endl<<"\t3. National food";
	cout<<endl<<"\t4. Continental food";
	cout<<endl<<"\t5. Desserts";
	cout<<endl<<"\t6. Exit from Restaurant";
}

void options(int a, char name[80])
{
	SuperDealsList s;
	FastFood f;
	NationalFooD n;
	ContinentalFooD c;
	DessertLIST d;
	
	if(a==1)
	{
		s.printList();
	}
	
	else if(a==2)
	{
		f.printList();
	}
	
	else if(a==3)
	{
		n.printList();
	}
	
	else if(a==4)
	{
		c.printList();
	}
	
	else if(a==5)
	{
		d.printList();
	}
	
	else if(a==6)
	{
		cout<<endl<<name<<" You have successfully exit\nWe hope to see you back soon "<<name;
	}
	else
	{
		cout<<endl<<"Inavlid Selection";
	}
}



int main()
{
	char go='y';
	int option, selection;
	float number_of_items;
	char name[100], address[1000];
	
	cout<<"\t\t\t\t\tMUKTESHWARI RESTAURANT\t\t\t\t";
	
	cout<<"\nEnter your name please:\t";
	cin.get(name,100);
	cin.ignore();
	cout<<"\nEnter your Hostel Name: ";
	cin.get(address,1000);
	Signing(name,address);
	do
	{
		menu(name);
		cout<<endl<<"\tMake Choose: \t";
		cin>>option;
		cout<<endl<<endl;
		options(option,name);
		if(option<=5)
		{
			cout<<endl<<"\tPlease Make choose: \t";
			cin>>selection;
			cout<<endl<<"\t\t"<<name<<"Please enter the number of items required: \t";
			cin>>number_of_items;
			Deal_price(option,selection,name,number_of_items);
		}
		cout<<endl<<endl<<"\tDo you wants to go back for making in other selection(y/n):\t";
		cin>>go;
	}while(go=='y'||go=='Y');
	feedback(name);
}
