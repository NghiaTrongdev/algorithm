#include<iostream>
using namespace std;
int n;
int x[1000];
void display()
{
    for (int i = 1 ; i <= n ;i++)
    {
        cout << x[i] ;
    }
    cout << endl;
}
void backtrack(int i)
{
    for (int j=0;j<=1;j++)
    {
        x[i] = j;
        if (i == n)
        {
            display();
        }else backtrack(i+1);
    }
}
int main()
{
    cout << "Nhap vao n : ";
    cin >> n;
    backtrack(1);
    return 0;
}