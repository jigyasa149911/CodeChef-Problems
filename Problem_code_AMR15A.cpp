#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numberOfSoldiers;
	cin>>numberOfSoldiers;
	
	int luckySoldiers = 0;
	int unluckySoldiers = 0;
	
	int arr[numberOfSoldiers];
	
	for(int i = 0; i< numberOfSoldiers; i++)
	{
	    cin>>arr[i];
	    
	    if(arr[i] % 2 == 0)
	    {
	        luckySoldiers +=1;
	    }
	    else{
	        unluckySoldiers += 1;
	    }
	    
	}
	
	if(luckySoldiers > unluckySoldiers)
	{
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else{
	    cout<<"NOT READY"<<endl;
	}
	return 0;
}
