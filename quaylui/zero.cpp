#include<iostream>
using namespace std;
int n;
int x[1000];
int dau[1000];
void display()
{
    for (int i=1;i<=n;i++)
    {
        cout << x[i] <<" ";
        if (dau[i]==1)
        {
            cout <<"-";
        }else if (dau[i]==2)
        {
            cout <<"+";
        } 
    }
    cout << endl;
}
void backtrack(int i,int sum)
{
    for (int j =1 ; j <= 2 ;j++)
    {
        dau[i] = j;
        if (sum ==0 && i == n)
        {
            display();
        }else 
        {
            backtrack(i+1,sum+i);
        }
    }
}
int main()
{
    cout <<"Nhap vao n : ";
    cin >> n;
    backtrack(1,0);
    return 0;

}