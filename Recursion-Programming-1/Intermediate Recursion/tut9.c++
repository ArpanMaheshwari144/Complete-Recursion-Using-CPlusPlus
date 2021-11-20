/* Print keypad combination
( 0 -> .;
1 -> abc
2 -> def
3 -> ghi
4 -> jkl
5 -> mno
6 -> pqrs
7 -> tu
8 -> vwx
9 -> yz
)

*/

#include <bits/stdc++.h>
using namespace std;

string keypad[] = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKeypadCombination(string number, int idx, string res)
{
    if (idx == number.length())
    {
        cout << res << endl;
        return;
    }
    for (int i = 0; i < keypad[number[idx] - '0'].length(); i++)
    {
        char curr = keypad[number[idx] - '0'][i];
        printKeypadCombination(number, idx + 1, res + curr);
    }
}

int main()
{

    string number = "22";
    printKeypadCombination(number, 0, "");

    return 0;
}
