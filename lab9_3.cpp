#include <iostream>
#include<string>
using namespace std;

int main(){
    int a,h,p;
	cout <<"Enter your age: ";
	cin >> a;
	
	string ss;
	if(a<=20){
	    cout <<"Enter your height: ";
	    cin >> h;
	
	    if(h>=175){
	        cout <<"Enter your property: ";
	        cin >> p;
	    
	        ss= p>69000000 ? "MARRIED" : "ONE-NIGHT-STAND";
	    }
	    else{
	        ss= h>=160 ? "FRIEND" : "UNFRIEND";
	    }
	}
	else{
	    cout <<"Enter your property: ";
	    cin >> p;
	
	    ss= a>=30 ? "UNFRIEND" : p>10000000 ? "BEST FRIEND" : "UNFRIEND";
	}
	
	cout <<"Your status = "<<ss;

	return 0;
}


/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
