#include <iostream>
#include <cstdio>
using namespace std ;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int x , y;
    char op;
    cin >> x >> op >> y;

    switch(op)
    {
    case '+':
        cout << x + y << endl;
        break;
    
    case '-':
        cout << x - y << endl;
        break;
        
    case '*':
        cout << x * y << endl;
        break;
     
    default:
        cout << "Error\n" << endl;
            break;
    }


   return 0;
}