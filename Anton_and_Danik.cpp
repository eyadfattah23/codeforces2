#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();
    unsigned int n,anton=0,danik=0;
    cin >> n;
    char g[n];
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (g[i] == 'A')
        {
            anton++;
        }else
        {
            danik++;
        }
        
        
    }
    if (anton > danik)
    {
        cout<<"Anton";
    }else if (danik > anton)
    {
        cout<<"Danik";
    }else
    {
        cout<<"Friendship";
    }
    
    
    

    



return 0;}