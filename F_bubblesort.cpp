#include<bits/stdc++.h>   //header file to include all standard library
using namespace std;      //using declaration

int main()                //main function
{ 
    int n;               //initializing integer type variable n which is the size of input 
    cin>>n;              //taking n as input

    if(n>=1 && n<=100)    //n can be 1 upto 100
    {
    int arr[n];         //intializing integer type array which is of n size that means array has n elements which can be any value we take

    

    for(int i = 0;i<n;i++)   /*this is a foor loop for taking array input here array will take input from i=0 to i is less than the size n
                            the i will increment by i++ */
    {
        cin>> arr[i];       //taking input of array elements
        
    }

    int s=0;              //initializing int type variable s which is initialily 0 

    //BUBBLE SORT

    for(int i=1;i<n;i++)      //first loop is for selecting each element of array
    {
        for(int j=0;j<n-i;j++) //second loop is for compare the selected element with the all rest of elements of array
        {
            if(arr[j]>arr[j+1]){          //if the element is grater than the other element           
            swap(arr[j],arr[j+1]);        //swap the elemnts
            s++;                         //increment the s for thye track of how many steps is occuring during sorting the array
        }

        } 
    }

    cout<<arr[0]; //printing

     for(int i =1;i<n;i++)     //loop for printing the ans
    {
        cout<<" "<<arr[i];    //printing the array after sorting it
    }

   cout<<endl;          //linebreak

   cout<<s<<endl;       //printing the step number by how many steps the array is sorted

    }

    return 0;            //return nothing to the main function
}