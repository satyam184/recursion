#include<iostream>
using namespace std;
void selection_sort(int *arr,int n){
    if (n==0 || n==1)
    {
        return ;
    }
    
        int minindex=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }
            
        }
        swap(arr[0],arr[minindex]);
        

    return selection_sort(arr+1,n-1);   
    
    

}
int main(){
    int n, min;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}