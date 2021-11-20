/*On the first row, we write a 0. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.
Given row N and index K, return the K-th indexed symbol in row N. (The values of K are 1-indexed.) (1 indexed).*/
#include <bits/stdc++.h>
using namespace std;

int kthSymbolInGrammar(int N, int K)
{
    if (N == 1 && K == 1)
    {
        return 0;
    }
    int lengthOfGrammar = pow(2, N - 1);
    int mid = lengthOfGrammar / 2;

    if (K <= mid)
    {
        return kthSymbolInGrammar(N - 1, K);
    }
    else
    {
        return !(kthSymbolInGrammar(N - 1, K - mid));
    }
}

int main()
{
    int N = 4, K = 5; // N define row and K define column

    cout << kthSymbolInGrammar(N, K);

    return 0;
}