#include <iostream>

using namespace std;

int sum = 0;

void merge(int arr[], int n)
{
    int left = 0;
    int right = n-1;
    int mid = (left + right) / 2;
    
    sum += arr[mid] + arr[mid-1];
    arr[mid] = sum;
    cout<<mid;
    n--;

    int temp[n];
    for(int i = 0; i < n+1; i++)
    {   
        if(arr[i] != mid || arr[i] != arr[mid-1])
        {
            temp[i] = arr[i];
        }
    }
    merge(temp,n);
    if(right == 0) return;
}


int main()
{

    int n,m;
    int arr[100000];

    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>m;
        arr[i] = m;
    };

    merge(arr, n);

    cout<<sum<<endl;
}