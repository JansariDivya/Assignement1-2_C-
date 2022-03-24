/*Problem to perform dequeue and find maximum of subarray*/

#include <deque>
#include <iostream>
 
using namespace std;
 
void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int sumOfMaximumOfSubsets(int arr[], int N)
{
   
    sort(arr, arr + N, greater<int>());
 
    int sum = arr[0];
    for (int i = 1; i < N; i++)
    {
        
        sum = 2 * sum + arr[i];
    }
 
    return sum;
}
 
int main()
{
    int i,size;
    deque<int> gquiz;
    cout<<"Enter the size of queue"<<endl;
    cin>>size;
    for(i=0;i<size;i++)
    {
    cin>>i;
    gquiz.push_back(i);
    }
  showdq(gquiz);
 
    return 0;
}
