#include <iostream>

using namespace std;

int main()
{
    int l=50;
    int scores[l];
    cout << "Please enter the number of students: " << endl;
    cin>>l;
    for(int i=0;i<l;i++)
        {
            cout<<"Enter Scores:"<<endl;
            cin>>scores[i];
        }

    cout<<"The scores are: "<<endl;
    for(int i=0;i<l;i++)
        {
        cout<<scores[i]<<endl;
        }
    cout<<endl;

    return 0;
}
