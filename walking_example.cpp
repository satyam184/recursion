#include <iostream>
using namespace std;
void reach(int src, int dest)
{
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if (src == dest)
    {
        cout << "reached";
        return;
    }
    src++;
    reach(src, dest);
}
int main()
{
    int src = 1;
    int dest = 10;
    cout<<endl;
    reach(src, dest);
    return 0;
}