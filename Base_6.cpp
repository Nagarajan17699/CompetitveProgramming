/*
Base 6
Problem Statement
Base 6

Given a sequence of distinct numbers a1, a2, ….. an, an inversion occurs if there are indices i<j such that ai > aj .

For example, in the sequence 2 1 4 3 there are 2 inversions (2 1) and (4 3).


The input will be a main sequence of N positive integers. From this sequence, a Derived Sequence will be obtained using the following rule. The output is the number of inversions in the derived sequence.


Rule for forming derived sequence

An integer may be represented in base 6 notation. In base 6, 10305 is 1x64 + 3x62 + 5 =1409. Note that none of the digits in that representation will be more than 5.

The sum of digits in a base 6 representation is the sum of all the digits at the various positions in the representation. Thus for the number 1409, the representation is 10305, and the sum of digits is 1+0+3+0+5=9. The sum of digits may be done in the decimal system, and does not need to be in base 6

The derived sequence is the sum of the digits when the corresponding integer is represented in the base 6 form number will be expressed in base 6, and the derived sequence is the sum of the digits of the number in the base 6 representation.

example 1

5

55, 53, 88, 27, 33

 

output : 2

 

example 2

8

120,21,47,64,72,35,18,98

output : 11

 

Explanation for example 1:

 

The number of integers is 5, as specified in the first line. The given sequence is 55, 53, 88, 27, 33.

 

The base6 representation is 131, 125, 224, 43, 53 The derived sequence is 5,8,8,7,8 (corresponding to the sum of digits). The number of inversions in this is 2, namely (8, 7), (8, 7)

 

Explanation for example 2:

 

The base 6 representation of this is 320,33,115,144,200,55,30,242, and the derived sequence (sum of digits) is 5,6,7,9,2,10,3,8. The number of inversions is 11 (5,2), (5,3),(6,2) (6,3), (7,2), (7,3) (9,2),(9,3) (9,8),(10,3), (10,8)

Input Format
The first line of the input will have a single integer, which will give N.

 

The next line will consist of a comma separated string of N integers, which is the main sequence

Constraints
N <= 50

Integers in sequence <= 107

Output Format
The number of inversions in the derived sequence formed from the main sequence.

Sample Input
4
2 1 4 3
Sample Output
2
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

int numberSwap(vector<int> v)
{
    int n = v.size();
    int swapnum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
                swapnum++;
            }
        }
    }

    return swapnum;
}
int sod(int num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int toBase6(int num)
{
    int i = 0;
    int res = 0;

    while (num)
    {
        int temp = num % 6;
        res = res + (pow(10, i++) * temp);
        num /= 6;
    }

    return res;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int i, n;
    cin >> n;
    vi v;

    fr(i, n)
    {
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }

    for (int i = 0; i < n; i++)
    {

        v[i] = toBase6(v[i]);
        v[i] = sod(v[i]);
    }

    int swap = numberSwap(v);
    cout << swap;

    return 0;
}