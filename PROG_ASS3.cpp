/* 
 AUTHOR: M.S Flores
 PROGRAM: Simple Converter 
 DESCRIPTION: This program converts the fahrenheit to celcius,know wheather its a good or bad day and converts centimeter to meter .
*/
#include<iostream>
using namespace std;
int main()
{
	// Declare the variables
	
	char choice;
	string menu="yes";
	
	
	   while(menu=="yes"||menu=="Yes"||menu=="YES")
	{
		
		//Prompt the user to enter his/her choice
		cout << "Enter your choice"<< endl;
		cout << " \n  a-fahrenheit to celsius, b-centimeter to meter :" << "\n\n" << "Answer :";
		cin >> choice;
		cout << "\n\n";
		
		if(choice=='a')
		{
			
			//Declare the variables
			float celsius;
			float fahrenheit;
			bool goodday;
			string again="yes";
	
	
	while(again=="yes"||again=="Yes"||again=="YES")
	{
		//Prompt the user to enter value in fahrenheit.	
	    cout << "Fahrenheit to Celsius" << endl; 
		cout << "Enter temperature in fahrenheit:";
	    cin >> fahrenheit;
	    cout << endl;
	    
			celsius =(0.55)*(fahrenheit -32);
			
			cout << "The degree in celsius is " << celsius << endl;
			goodday=celsius>=27;
			if (goodday)
			{
			cout  <<" \n Its a good day ! "<< endl;
		    }
		    else
		    {
		    cout <<  "It was a bad day! " << endl;
		    }
			
		 //loop to try it again
	     cout << "\n\n Do you want to try it again? (yes/no):";
	     cin  >> again;
	     cout << " \n\n\n";
    	}
		
		//loop to go back to the menu	
		 cout << "Do you want to return to the menu? (yes/no)";
		 cin >> menu;
		 cout <<"\n\n";
		 
       }
	   
	  
       
    else if(choice=='b')
	   {
	   	
	   	      //Declare the variables
	   	      float a;
	   	      float b;
	   	      string again="yes";
	   	      
	   	    while(again=="yes"||again=="Yes"||again=="YES")
	   {
	   	      
	   	      //Prompt the user enter input
	   	      cout << "Enter the value in centimeter :" ;
	   	      cin >> a;
	   	      
	   	      b=a/100;
	   	      
	   	      cout << "\n" <<  "The converted value in meter is :" << b <<  endl;
	   	      
	   	      //loop to try it again
	     cout << "\n\n Do you want to try it again? (yes/no):";
	     cin  >> again;
	     cout << " \n\n\n";
    	}
	
		//loop to go back to the menu	
		 cout << "Do you want to return to the menu? (yes/no)";
		 cin >> menu;
		 cout <<"\n\n";
		 
       } 
   }
	   	   
   return 0;
       
}

