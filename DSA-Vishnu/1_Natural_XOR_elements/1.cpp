#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int N;
        cin >> N;

        if(N%4==1) {
            cout<<"1"<<" "<<"1"<<endl;
        }
        else if(N%4==2) {
            cout<<"2"<<" "<<N<<" "<<"1"<<endl;
        }
        else if(N%4==3) {
            cout<<"0 "<<" "<<endl;
        }
        else if(N%4==0){
            cout<<"1 "<<N<<endl;
        }
    }
}
