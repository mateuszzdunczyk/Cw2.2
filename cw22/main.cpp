#include <iostream>

using namespace std;

int main()

{


    cout <<" Podaj liczbe wierszy: "<<endl;
    int j;
    cin>>j;
    for (int i=1; i<=j; i++)
    {
        for(int w = 1; w<=j-i; w++)
            cout<<" ";
        for( int w = 0; w<=i-2;w++)
            cout<< "* ";
        cout<<endl;
    }
    return 0;
}
