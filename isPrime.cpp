

#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
  int num;
  cout<<"Enter any number to check prime number or not"<<endl;
  cin>>num;
  if(isPrime(num))
  {
      cout<<"Prime number "<<num<<endl;
  }else
  {
      cout<<"Not a prime "<<num<<endl;
  }
  return 0;
}

   
