#include <iostream>
using namespace std ;
float getval()
{
	float x;
	
	cin>>x;
	return x;
}
float main()
{
	float entry; float exit; float diff;
	cout<<"enter entry price: \n";
	entry= getval();
	cout<<"enter exit price: \n"; 
	exit= getval();
	diff= exit - entry;
	cout<< " \n the differnce in the entry and exit is \n "<< diff;
	cout<<"\n enter your qaunity: \n";
float	qaunt= getval();
	
float	gain_loss=diff*qaunt;

	//shapres ratio is (rx-rf)/ stdev of prefolio\\
	//rx= asset return , rf = risk free rate of return\\
// the hogher the sharps ratio the better //

//barching partial sales 
// automate risk return

//gross entry
float gross_entry= entry*qaunt ;
float gross_exit=  exit*qaunt; 

float percent_diff=((exit-entry)/entry)*100;

cout<< " \n to make this move your entry exptations is " << gross_entry  << "\n and your exit expetation is " << gross_exit ; 
cout<<"your gain/loss is  "<<gain_loss <<"\n with a percent diff of : " << percent_diff<<"\n";

float  asset_return = 1; // 1 is an place holder//
	
	
	
	
	
	
	
	
return 0;}