#include<iostream>
using namespace std;
#include<climits>
// Selection sort.

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    cout<<"Sorted array using selection sort is : "<<endl;
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    
    
}
