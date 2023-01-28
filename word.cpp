#include<bits/stdc++.h>
#include <cctype>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();
    string n;
    cin>>n;
    int lowcount = 0 ,uppcount = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (isupper(n[i])) 
        {
            uppcount++;
        }else
        {
            lowcount++;
        }
        
        
    }
    if (lowcount >= uppcount)
    {
     transform (n.begin (), n.end (), n.begin (), ::tolower);   
    }
    else
    {
     transform (n.begin (), n.end (), n.begin (), ::toupper);   
    }
    cout<<n;
    
     



return 0;}