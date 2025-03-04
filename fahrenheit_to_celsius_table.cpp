// Problem Descriptiion:-(Fahrenheit to Celsius Table)

/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

Input Format :
    3 integers - S, E and W respectively

Output Format :
    Fahrenheit to Celsius conversion table. One line for every Fahrenheit and Celsius Fahrenheit value. Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")

Constraints :
    0 <= S <= 1000
    0 <= E <= 1000
    0 <= W <= 1000

Sample Input 1:
    0
    100
    20
Sample Output 1:
    0   -17
    20  -6
    40  4
    60  15
    80  26
    100 37

Sample Input 2:
    120
    200
    40
Sample Output 2:
    120 48
    160 71
    200 93

Explanation for Sample Output 2 :
    Start value is 120, end value is 200 and step size is 40. Therefore, the values we need to convert are 120, 120 + 40 = 160, and 160 + 40 = 200.
    The formula for converting Fahrenheit to Celsius is:
    Celsius Value = (5/9)*(Fahrenheit Value - 32)
    Plugging 120 into the formula, the celsius value will be (5 / 9)*(120 - 32) => (5 / 9) * 88 => (5 * 88) / 9 => 440 / 9 => 48.88
    But we'll only print 48 because we are only interested in the integral part of the value.
*/

#include <iostream>
using namespace std;

int fah_To_cel(int a)
{
    int ans = (5.0 / 9) * (a - 32);
    return ans;
}

void printTable(int start, int end, int step)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

    // Using for loop
    for (; start <= end; start = start + step)
    {
        int cel = fah_To_cel(start);
        cout << start << "\t" << cel << endl;
    }
}

int main()
{
    int s, e, w;
    cin >> s >> e >> w;
    printTable(s, e, w);
    return 0;
}