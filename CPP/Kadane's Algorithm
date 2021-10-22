#include <iostream>

using namespace std;

int main()
{
    // generating subarrays Maximum Sum lec 13
    // Kadane's Algorithm
    
    int num, key;
    
    cout << "Enter the number of elements in array: ";
    cin >> num;    // taking the no of elements in array
    
    int a[1000]; // max constraint size
    
    int currentSum = 0;
    int maximumSum = 0;
   
   
    // taking input from user the elements
    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    // Kadane's Algorithm for Maximum Sub-Array Sum


    for(int i =0; i<num; i++)
    {
        
        currentSum = currentSum + a[i];
        
        // if at any time currentSum becomes negative, so make it 0
        
        if (currentSum <0 )
        {
            
            currentSum = 0;
            
        }
        
        // and I will update my maximumSum
        
        maximumSum = max(currentSum,maximumSum);
        
        // so whichever is the maximum either the old one or the new 
        // one (current sum)...my maximumSum will get updated to maximum
        
        
    }


    // print the maximumSum
    
    cout << "Maximum Sum of Sub-Array: "<<maximumSum << endl;
    

    return 0;
}
