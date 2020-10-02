#include<iostream>

using namespace std;

int main(void)
{
      string str,temp;
      int t,count;
      cin>>t;
      cin>>temp;
      while(t--){
          getline(cin, str);
          count = 0;
          if(str.size() == 5)
              cout<<"3"<<endl;
        else {
            if(str[0] == 't')
                count++;
            if(str[1] == 'w')
                count++;
            if(str[2] == 'o')
                count++;
            if(count>=2)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
      }
}
