#include<iostream>
using namespace std;
int n;
int nguoc[1000],xuoi[1000],cot[1000];
int cnt =0;

void backtrack(int i)
{
    for (int j = 1;j<=n;j++)
    {
        if (cot[j]==1 && nguoc[i-j+n]==1 && xuoi[i+j-1]==1)
        {
            cot[j] = nguoc[i-j+n] = xuoi[i+j-1] = 0;
            if (i==n)
            {
            cnt ++;
            } else 
            {
                backtrack(i+1);
            }
            cot[j] = nguoc[i-j+n] = xuoi[i+j-1] = 1;
        }
    }
}
int main()
{
    cout << "Nhap vao n : ";
    cin >> n;
    for (int i =1;i<=100;i++)
    {
        cot[i] = nguoc[i]= xuoi[i]= 1;
    }
    backtrack(1);
    cout << cnt;
    return 0;
}