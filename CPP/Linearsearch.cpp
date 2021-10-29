#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter the size of the array ";
    cin>>length;
    int a[length];
    for(int j = 0; j < length; j++)
    {
        cin>>a[j];
    }
    int n;
    cout<<"Enter the number you are searching for ";
    cin>>n;
    int check = 0;
    for(int i = 0; i < sizeof(a); i++)
    {
        if(a[i]==n){
            check = 1;
            cout<<"Element found at index "<<i;
            break;
        }
    }
    if(check == 0){
        cout<<"Element is not present in the array";
    }
}
