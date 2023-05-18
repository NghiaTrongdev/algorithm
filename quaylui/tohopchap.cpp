#include<iostream>
using namespace std;
int n;
int k;
int x[1000];
void display()
{
    for (int i=1;i<=k;i++)
    {
        cout << x[i] ;
    }
    cout << endl;
}
void backtrack(int i)
{
    for (int j =x[i-1]+1 ; j <= n - k +i ; j++)
    {
        x[i] = j;
        if (i == k)
        {
            display();

        }else backtrack(i+1);
    }
}
int main()
{
    cout <<" nhap vao n: ";
    cin >> n;
    cout << " nhap vao k : ";
    cin >> k;
    x[0] = 0;
    backtrack(1);
    return 0;
}