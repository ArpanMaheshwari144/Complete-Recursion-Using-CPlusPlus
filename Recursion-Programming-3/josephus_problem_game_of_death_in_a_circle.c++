/*There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed. The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise). In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom.
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
Consider if n = 5 and k = 2, then the safe position is 3.
Firstly, the person at position 2 is killed, then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.*/
#include <bits/stdc++.h>
using namespace std;

/*jo bhi problems recursively define hoti hai unme hum I-B-H(Induction-BaseCondition-Hypotheses) method ka use karte hai*/
/*jis problem mei choices and decisions hote hai un problems ko hum recursive-tree se solve karte hai*/
void josephusProblem(vector<int> personOfArray, int k, int indexOfDiePerson, int &ans)
{
    // Base Condition
    if (personOfArray.size() == 1)
    {
        ans = personOfArray[0];
        cout << "The person who will save last will stand on the position: " << ans << endl;
        return;
    }

    // Hypotheses
    indexOfDiePerson = (indexOfDiePerson + k) % personOfArray.size();

    personOfArray.erase(personOfArray.begin() + indexOfDiePerson);

    josephusProblem(personOfArray, k, indexOfDiePerson, ans);
}

int main()
{
    int n = 40; // n is number of peoples
    int k = 7;  // k will be the count including that people which will count that which person should die

    vector<int> personOfArray;
    for (int i = 1; i <= n; i++)
    {
        personOfArray.push_back(i);
    }

    k = k - 1;

    int indexOfDiePerson = 0;

    int ans = -1;

    josephusProblem(personOfArray, k, indexOfDiePerson, ans);

    return 0;
}