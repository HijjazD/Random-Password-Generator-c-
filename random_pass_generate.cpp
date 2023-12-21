#include<iostream>
#include<time.h>
using namespace std;

void password(int length){
    char result[length];
    char word[] = "abcdefghijklmnopqrstuvwxyz1234567890!@#$^&*";//length 43
    srand(time(NULL));
    cout<<"\n";
    for (int i = 0; i < length; i++)
    {
        result[i] = word[rand()%43];
        cout<<result[i];
    }
    cout<<"\n\n";

}


int main(){
    cout<<"Random Password Generator.......\n";
    int passLength;
    cout<<"\n\n";
    cout<<"Enter length of password.....\n";
    cin>>passLength;
    cout<<"\n\n";
    //function
    password(passLength);
}