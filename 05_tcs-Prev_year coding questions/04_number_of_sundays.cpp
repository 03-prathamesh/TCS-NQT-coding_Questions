// Jack is always excited about sunday. It is favourite day, when he gets to play all day. 
//And goes to cycling with his friends. 
// So every time when the months starts he counts the number of sundays he will get to enjoy.
// Considering the month can start with any day, be it Sunday, Monday…. Or so on.
// Count the number of Sunday jack will get within n number of days.

//  Example 1:

// Input 

// mon-> input String denoting the start of the month.

// 13  -> input integer denoting the number of days from the start of the month.

// Output :

// 2    -> number of days within 13 days.

// Explanation:

// The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days.
// And then next Sunday in next 7 days and so on.
// Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday.
// Total 2 sundays may fall within 13 days.



#include<bits/stdc++.h>
using namespace std;

int main(){


string n1;
cout<<"Enter the starting day of the month"<<endl;
cin>>n1;

int n2;
cout<<"Enter the number of days in the given month"<<endl;
cin>>n2;

//lets create a array of string first to have the index of each day 
 string arr[7]={"Monday","Tuesday","Wednsday","Thursday","Friday","Saturday","Sunday"};

int count=0;
int ind=-1;
 for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
     if(n1==arr[i]){
        ind=i;
     }
 }
 if(ind==-1){
    cout<<"Enter the correct string:"<<endl;
 }

   
   int ans=6-ind;
   if(ans>n2){
     cout<<0<<endl;

   }
   else{
     if(ans!=0){
        count=count+1;
     }
     n2=n2-ans;

     int main=n2/7;
     count=count+main;
     cout<<count<<endl;

     
   }


    return 0;
}