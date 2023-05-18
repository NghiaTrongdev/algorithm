#include<iostream>
#include<vector>
using namespace std;

int result =  INT_MIN;
int sum_arr = 0;
int n;
vector <int> arr;
void backtrack(int pos,int sum)
{
    for (int i = pos+1; i < arr.size();i++)
    {
        int sumA = sum + arr[i];
        // cout << arr[i] << endl;
        // cout << endl;
        cout<< pos << endl;
        result = max(result,(sum_arr -sumA)*sumA);
        backtrack(i,sumA);
    }
}
int main()
{
    cout << "Nhap n : " ;
    cin >> n;
    for (int i= 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        sum_arr += x;
    }
    backtrack(0,0);
    cout << result << endl;
}