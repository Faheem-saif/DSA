#include<iostream>
#include<fstream>
using namespace std;

int main(){
		int count;
	int j,choice2;
	do{
		cout<<"1. To Check"<<endl;
    	cout<<"2. To Exit"<<endl;
		cin>>choice2;
		if(choice2==1){
		
		string name;
		int age,choice;
		//To write the record in txt file	   
		ofstream pa("Patientslist1.txt",ios::app);
		cout<<"Enter  your Name: ";
//	    cin>>name;
         
	    getline(cin>>name,name);
		  cin.clear();
         cin.sync();
		cout<<"Enter  your Age:  ";
		cin>>age;
		cout<<"Select your blood group:  "<<endl;
		cout<<"-----------------------  "<<endl;
		cout<<"[1]. \t  A+ :  "<<endl;
		cout<<"[2]. \t  B+ :  "<<endl;
		cout<<"[3]. \t  O+ :  "<<endl;
		cout<<"[4]. \t  AB+ :  "<<endl;
		cout<<"[5]. \t  A- :  "<<endl;
		cout<<"[6]. \t  B- :  "<<endl;
		cout<<"[7]. \t  O- :  "<<endl;
		cout<<"[8]. \t  AB- :  "<<endl;
		cout<<"-----------------:"<<endl;

		cin>>choice;
			if(choice==1){
				count++;
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				
				cout<<"you can donate to :\t A+/t AB+ "<<endl;
				cout<<"you can accept from :\t A+/t AB+ "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :\t A+\t AB+ "<<endl<<"you can donate to :\t A+\t AB+ "<<endl;
				pa.close();
			}
			else if(choice==2){
				count++;
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				cout<<"you can donate to :\t A+\t AB+ "<<endl;
				cout<<"you can accept from :\t A+\t A-,O+,o- "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :\t A+\t A-,O+,o- "<<endl<<"you can donate to :\t A+\t AB+ "<<endl;
				pa.close();
	
			}
			else if(choice==3){
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				cout<<"you can donate to :\t O+\tA+\tB+\tAB+ "<<endl;
				cout<<"you can accept from :\t O+\t O-  "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :\t O+\t O-  "<<endl<<"you can donate to :\t O+\tA+\tB+/tAB+ "<<endl;
				pa.close();
	
			}
			else if(choice==4){
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				cout<<"you can donate to :/t AB+ "<<endl;
				cout<<"you can accept from :Universal Acceptor"<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :Universal Acceptor"<<endl<<"you can donate to :/t AB+ "<<endl;
				pa.close();
				
			}
			else if(choice==5){
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				cout<<"you can donate to :/t A+/tA-/tAB+/tAB- "<<endl;
				cout<<"you can accept from :A-/tO- "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :A-/tO- "<<endl<<"you can donate to :/t A+/tA-/tAB+/tAB- "<<endl;
				pa.close();
				
			}
			else if(choice==6){
				cout<<name<<"/n"<<age<<endl;
				cout<<"you can donate to :/t B+/tB-/tAB+/tAB- "<<endl;
				cout<<"you can accept from :/t B-/t O- "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :/t B-/t O- "<<endl<<"you can donate to :/t B+/tB-/tAB+/tAB- "<<endl;
				pa.close();
			
			}
			else if(choice==7){
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				cout<<"you can donate to :Universal Donor "<<endl;
				cout<<"you can accept from :\t O- "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :/t O- "<<endl<<"you can donate to :Universal Donor "<<endl;
				pa.close();	
	
			}
			else if(choice==8){
				cout<<"Name: "<<name<<" \n "<<"Age: "<<age<<endl;
				cout<<"you can donate to :/t A+/t AB+ "<<endl;
				cout<<"you can accept from :/t A+/t O- "<<endl;
				pa<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"you can accept from :/t A+/t O- "<<endl<<"you can donate to :/t A+/t AB+ "<<endl;
				pa.close();
	
			}
		
		}
		else if (choice2==2){
			return 0;
		}

		
cout<<count<<endl;
	}while(choice2<3&&choice2>0);
		
}
