#include <iostream>
using namespace std;
void reverse_string(string &str , int i)
{
    if (i >= (str.size()-1)/2)
        return;

    swap(str[i], str[str.size()-i-1]);
    i++;
    

    reverse_string(str, i);
}
int main()
{
    string str = "12345";
    reverse_string(str, 0);
    cout << str;
    return 0;
}