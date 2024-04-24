// The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
// For example, with a shift of 1, P would be replaced by Q, Q would become R, and so on...
// To pass an encrypted message from one person to another, it is first necessary that both the parties have the 'Key' for the cipher, so that the sender may encrypt and the receiver may decrypt it.
// Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 alphabets.
// As we are designing custom caesar cipher, in addition to alphabets, we are consiidering numeric digits from 0 to 9. Digits can also be shifted by key places.
// For example, if a given text contains any digit with value 5 and key = 2, then 5 will be replaced by 7.

// Input:
// AdfTu34
// 1
// Output:
// BegUv45

// Input:
// yZ89
// 2
// Output:
// aB01

#include<bits/stdc++.h>
using namespace std;

int main(){

   string str;
   cout<<"Enter a nummber: "<<endl;
   cin>>str;

   int key;
   cout<<"Enter the key: "<<endl;
   cin>>key;

   for(int i=0;i<str.size();i++){
       if(str[i]>='A' && str[i]<='Z'){
           if(str[i]+key>'Z'){
              int diff=str[i]-26;  //best logic that i have learned
              int add=diff+key;
              str[i]=add;
           }
           else{
             str[i]=str[i]+key;
           }
       }
       else if(str[i]>='a' && str[i]<='z'){
        if(str[i]+key>'z'){
              int diff=str[i]-26;
              int add=diff+key;
              str[i]=add;
           }
           else{
             str[i]=str[i]+key;
           }
       }
       else{
           if(str[i]+key>'9'){
              int diff=str[i]-10;
              int add=diff+key;
              str[i]=add;
           }
           else{
             str[i]=str[i]+key;
           }
       }
   }

   cout<<str;

    return 0;
}