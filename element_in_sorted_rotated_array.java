/* 

URL : https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0

Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element K. The task is to find the index of the given element K in the array A.

Input:
The first line of the input contains an integer T, denoting the total number of test cases. Then T test cases follow. Each test case consists of three lines. First line of each test case contains an integer N denoting the size of the given array. Second line of each test case contains N space separated integers denoting the elements of the array A. Third line of each test case contains an integer K denoting the element to be searched in the array.

Output:
Corresponding to each test case, output the index of the element found in the array.  If element is not present, then output -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 ≤ Ai ≤ 108
1 ≤ K ≤ 108

Example:
Input:
3
9
5 6 7 8 9 10 1 2 3
10
3
3 1 2
1
4
3 5 1 2
6

Output:
5
1
-1

Explanation:
Testcase 1: 10 is found at index 5.

The Below Solution is not efficient

Efficient Solution : https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/
*/
import java.util.*;
class GFG
 {
	public static void main (String[] args)
	 {
         Scanner s = new Scanner(System.in);
            int t;
            t = s.nextInt();
            while(t-->0)
            {
                int num1,num2;
                num1 = s.nextInt();
                int arr[] = new int[num1];
                for(int i=0;i<num1;i++)
                {
                    arr[i] = s.nextInt();
                }
                
                num2 = s.nextInt();
                
                int l=0,r=num1-1,mid=0,flag = 0;
                
                while(r>=l)
                {
                    mid = (l+r)/2;
                  
                    if(arr[mid] == num2){
                        System.out.println(mid);
                        flag = 1;
                        break;
                    }
                    
                    if(arr[mid] > arr[l])
                    {
                        if(num2>arr[mid]){
                            l = mid+1;
                         
                        }
                        else if(num2<arr[mid] && num2 >= arr[l])
                            r = mid-1;
                        else if(num2<arr[mid] && num2 < arr[l])
                            l=mid+1;
                    }
                    else if(arr[mid] < arr[l])
                    {
                        if(num2<arr[l])
                            l = mid+1;
                        else{
                            r=mid-1;
                        }

                    }
                  
                }
                if(flag == 0)
                    System.out.println("-1");
                
            }
            s.close();
	 }
}