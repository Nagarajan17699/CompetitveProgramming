/*
Drunkard's Walk
Problem Statement
In state of inebriation, a drunkard sets out to walk home, afoot. As is common knowledge, a drunkard struggles to find balance and ends up taking random steps. Not surprisingly these are steps in both forward as well as backward direction. Funnily enough, these are also repeated movements. Now, it so happens that on this drunkard's path, there are two banana skins - one in forward direction and one in backward direction. There is a real danger that the drunkard's downfall may be accelerated if he accidentally slips over either of those banana skins.

Your task is to find out if he will slip over the banana skin on forward path or banana skin on backward path and in how much time. It is also possible that by his good fortune he might not step over either banana skins. Write a program to calculate the outcome.

Input Format
First line contains total number of test cases, denoted by N

Next N lines, contain a tuple containing 6 values delimited by space

D FM BM T FBS BBS, where

1.    D​ denotes direction, either F (Forward) or B (Backward)

2.    FM​ denotes the magnitude of forward movement in meters

3.    BM​ denotes the magnitude of backward movement in meters

4.    T​ denotes time taken to cover 1 meter

5.    FBS​ denotes distance from Drunkards' starting position and the banana skin in forward direction

6.   BBS ​denotes distance from Drunkards' starting position and the banana skin in backward direction

Constraints
1 <= N <= 100

forward movement (FM) > 0

backward movement (BM) > 0

time (T) > 0

Distance to banana skin in forward direction (FBS) > 0

Distance to banana skin in backward direction (BBS) > 0

All input values must be integer only

Output Format
For each test case, print time taken by the Drunkard to slip over the forward or backward banana skin. Print F if he slips over forward banana skin and B if he slips over the backward banana skin. Both the outputs must be delimited by whitespace

OR

Print "Hurray" if the Drunkard is lucky to not slip over either banana skin

Sample Input

    6
    B 14 12 7 25 4
    B 11 4 6 10 17
    F 2 3 9 12 15
    F 1 12 3 22 28
    B 8 8 5 9 18
    F 8 8 5 7 9


Sample Output

    28 B
    156 F
    675 B
    102 B
    Hurray
    35 F

Hint:
 The given Direction is only for the first move then the man goes front and back alternatively
 add the forward meter and subtract backward meter
 print whatever reaches first

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //D FM BM T FBS BBS
    int t;
    cin >> t;
    while (t--)
    {

        char dir, var;
        int fm, bm, t, fb, bb;
        cin >> dir >> fm >> bm >> t >> fb >> bb;

        int steps = 0, t_steps = 0, flag;

        if (fm == bm)
        {
            if (fb < fm && dir == 'F')
                cout << fb * t << " "
                     << "F"<<endl;
            else if (bb < bm && dir == 'B')
                cout << bb * t << " "
                     << "B"<<endl;
            else
                cout << "Hurray" << endl;
        }
        else
        {

            if (dir == 'B')
                flag = 1;
            else if (dir == 'F')
                flag = 0;

            bb = -bb; //Conversion from +ve to -ve is to represent the backward meter

            while (steps < fb && steps > bb)
            {
                if (flag % 2 != 0)
                {
                    steps -= bm;
                    t_steps += bm;
                    flag++;
                }
                else
                {
                    steps += fm;
                    t_steps += fm;
                    flag++;
                }
            }

          
            if (steps > fb)
            {
                steps -= fm;
                int tmp = fb - steps;
                t_steps -= fm;
                t_steps += tmp;
                var = 'F';
            }
            else
            {
                steps += bm;
                int tmp = abs(bb) - abs(steps);
                t_steps -= bm;
                t_steps += tmp;
                var = 'B';
            }

            cout << (t_steps * t) << " " << var<< endl;
        }
    }
    return 0;
}
