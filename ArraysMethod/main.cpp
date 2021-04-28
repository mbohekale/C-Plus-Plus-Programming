#include <iostream>

using namespace std;

void average(int length,int array[]);
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
      average(3,scores);
        cout<<endl;

    return 0;
}
void average(int length,int array[])
{
    int sum=0;
    for(int i=0;i<length;i++)
        {
        sum+=array[i];
       }
        cout<< "Sum :"<< sum<<endl;


}
