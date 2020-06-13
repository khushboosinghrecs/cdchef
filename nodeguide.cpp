#include <iostream>
using namespace std;
struct Node
{
    int aa, bb;
    Node(int a, int b)
    {
        aa = a;
        bb = b;
    };

    //you can overload operator in this class too..
    //like this

    //you can define your operator behaiour for your object got it ?hmmmmmm anything else?uhmmmmbye
    bool operator==(Node b)
    {
        return (this->aa == b.aa && this->bb == b.bb); // this function is working over here
    }
};
int main()
{
    Node a = {10, 15};
    Node b = {14, 98};
    Node c = {10, 15};
    cout << (a == b) << '\n';
    cout << (a == c) << '\n';
    return 0;
}
