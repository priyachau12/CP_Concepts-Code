/*

N, K

No of leaves is odd or even? 

K 

(N - K + 1) -> N is the number of leaves!

no of odd numbered days should be even!

our bigggest task is to find number of odd numbers in range [a,b].





*/

int countOddNumbers(int a, int b) {
    // If 'a' is even, make it the next odd number
    if (a % 2 == 0) {
        a++;
    }
    
    // If 'b' is even, make it the previous odd number
    if (b % 2 == 0) {
        b--;
    }

    // If 'a' becomes greater than 'b', there are no odd numbers
    if (a > b) {
        return 0;
    }

    // The formula for counting the number of odd numbers in the range
    return (b - a) / 2 + 1;
}


