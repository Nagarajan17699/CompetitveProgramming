/*

Pattern
Problem Statement
Print following pattern

Input Format
two integers

Contraints
1<=N<=100

Output Format
Print pattern

Sample Input
7 6
Sample Output
X X X X X X
X 0 0 0 0 X
X 0 X X 0 X
X 0 X X 0 X
X 0 X X 0 X
X 0 0 0 0 X
X X X X X X

NOTE: Run Time Error may occur the size for the matrix is >100 or >1000
*/

#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define pf(x) push_front(x)
#define pob(x) pop_back(x)
#define vclr(v) v.clear()
#define sii(x) insert(x)
#define ai(x) int arr[x]
#define vi vector<int>
#define mii map<int, int>
#define mci map<char, int>
#define si set<int>
#define li list<int>
#define lc list<char>
#define vout(v)                                 \
    for (auto i = v.begin(); i != v.end(); i++) \
    {                                           \
        cout << *i << " ";                      \
    }
#define arrout(arr, n)          \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << arr[i] << " ";  \
    }
#define arrin(arr, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
#define acc(v) accumulate(v.begin(), v.end(), 0)
#define vb begin()
#define ve end()
#define c(x) cout << x
#define sn(x) scanf("%d", &x)
#define fr(i, x) for (int i = 0; i < x; i++)

int fillmat(int row, int col)
{
    int trow = row, tcol = col;
    char arr[100][100];
    char x = 'X';
    int strow = 0, stcol = 0;

    //Using the Spiral Printing method
    while (strow < row && stcol < col)
    {
        for (int i = stcol; i < col; i++)
        {
            arr[strow][i] = x;
        }
        strow++;

        for (int j = strow; j < row; j++)
        {
            arr[j][col - 1] = x;
        }
        col--;

        if (strow < row)
        {
            for (int i = col - 1; i >= stcol; i--)
            {
                arr[row - 1][i] = x;
            }
            row--;
        }

        if (stcol < col)
        {
            for (int i = row - 1; i >= strow; i--)
            {
                arr[i][stcol] = x;
            }
            stcol++;
        }

        x = (x == '0') ? 'X' : '0';
    }

    //Printing the matrix
    for (int i = 0; i < trow; i++)
    {
        for (int j = 0; j < tcol; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int row;
    int col;

    cin >> row >> col;
    fillmat(row, col);

    return 0;
}