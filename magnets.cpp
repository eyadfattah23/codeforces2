#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();
    int n,gs=1;
    cin >> n;
    string mag[n];
    for (int i = 0; i < n; i++)
    {
        cin >>mag[i];
       
    }
    for (int i = 1; i < n; i++)
    {
         if (mag[i] != mag[i-1])
        {
            gs+=1;
        }
        
    }
    
    
        cout<<gs<<endl;
    




return 0;}