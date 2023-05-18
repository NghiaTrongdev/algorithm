#include<iostream>
using namespace std;
int n;
int x[1000];
int isvisited[1000];
int k;
int cnt =0;
void display()
{
    for (int i=1;i<=n;i++)
    {
        cout << x[i];
    }
    cout << endl;
}
void backtrack(int i)
{
    for (int j=1;j<=n;j++)
    {
        if(isvisited[j]==0)
        {
        x[i] = j;
        isvisited[j] = 1;
        if(i == n)
        {

            cnt ++;
            if (cnt == k)
            {
                display();
            }
            
        } else 
        {
            backtrack(i+1);
        }
        isvisited[j] =0;
        }
    }
}
int main()
{
    cout <<"Nhap vao n: ";
    cin >> n;
    cin >> k;
    memset(isvisited,0,sizeof(isvisited));
    backtrack(1);
    return 0;
}