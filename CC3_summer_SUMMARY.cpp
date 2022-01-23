//
// Created by ryan javid on 2021-08-19.
//

// This is the summary on all major concepts covered in Olympiads CC3 summer course
#include <bits/stdc++.h>
using namespace std;



// binary search
// MUST BE SORTED TO PREFORM BS
// Binary search. Given value and sorted array a[], find index i
//such that a[i] = value, or report that no such index exists
// Algorithm maintains a[lo] <= value <= a[hi]
// O(log(n)) time
// BS IMPLEMENTATION
    int binarySearch(int arr[], int low, int hi, int x) {
        if (hi >= low) {
            int mid = low + (hi - low) / 2;

            // If the element is present at the middle
            // itself
            if (arr[mid] == x)
                return mid;

            // If element is smaller than mid, then
            // it can only be present in left subarray
            if (arr[mid] > x)
                return binarySearch(arr, low, mid - 1, x);

            // Else the element can only be present
            // in right subarray
            return binarySearch(arr, mid + 1, hi, x);
        }

        // We reach here when element is not
        // present in array
        return -1;
    }

    int main() {
// BUILT IN BS
// LOWERBOUNDS and UPPERBOUNDS (works on vectors and arrays)
        int ar[5] = {1, 2, 4, 5, 6};
// lowerbounds returns the address of the  FIRST occurrence of the desired element if found
// otherwise it will return the address of the first GREATER element then the desired element
// If element is greater then the largest number of the array, it will return the array size + 1;
        auto index = lower_bound(ar, ar + 5, 5) - ar; // RETURNS 3 (INDEX)
        auto index2 = lower_bound(ar, ar + 5, 3) - ar; // since 3 is not present, it will return the index of 2
        auto index3 = lower_bound(ar, ar + 5,
                                  7); //since 7 is larger then the largest element in the array, it will loop back, and return 0

// upperbounds will always return the address of the FIRST index of the element GREATER then the desired element;
        auto index4 = upper_bound(ar, ar + 5, 5) - ar; // this will return 5


// DATA STRUCTS
// vectors are pretty straight forward, creating a vector, and useful functions below
        vector<int> v;
        v.push_back(3); // adds 3 to the end of the vector
        v.push_back(4);
        v.pop_back(); // removes top element (4) from the vector
        vector<int> v_copy;
        v_copy = v; // you could copy arrays with "="
        v.size(); //size of vector
        v.empty(); // bool value if array is empty or not
        v.begin(); // returns iterator to beginning
        v.end(); // returns iterator to end
        v.clear(); // clear contents of a vector
// sets and map
//sets are unordered and have NO duplicates and have the same operation as collections
// sets are good to find all DISTINCT elements, or seeing if an element exists
        set<int> s;
// there are 2 types of sets
        unordered_set<int> HS; // hashset, unordered, fast, good for most uses
        set<int> TS; //treeset, ordered

// maps are an object that maps keys to values
// basically, creating your own indexes in an array;
// each key can map to at most one value
// there are 2 types of maps
        unordered_map<int, int> UM;  //hashmap, faster, and unordered
        map<char, int> TM; //treemap, slower, mantains order
//map operations
        TM['a'] = 1; // maps the char 'a' to 1
        TM.empty(); // bool value if empty or not
        TM.size(); // size of map
        auto X = TM.find('a')->second; // will return 1

// STACKS
// this struct sorts a set of elements in a particular order
// stack principle: LIFO (LAST IN FIRST OUT)
// this means that the last element inserted is the first one to be removed
// similar to a plate of trays
// could be used for postfix, infix and prefix conversion / calculations
// could also be used for syntax checking ( (), {}, [] )

        stack<int> st;
        st.empty(); // tests if the stack is empty
        st.push(2);
        st.size(); // returns the size of the stack
        st.push(3);
        st.push(6); // adds 2, 3 and 6 to the stack
        st.top(); // returns the top value of the stack
        st.pop(); // removes the most RECENTLY added element (6)

// STACK APPLICATION
// too lazy to code out all the infix, prefix and postfix operations lol but they can all be done in O(n) time with a stack
// can be used to reverse data (string, files), very useful for finding palindromes
        stack<char> word;
        char data[5] = {'h', 'e', 'l', 'l', 'o'};
        for (char i : data) {
            word.push(i);
        }
        while (!word.empty()) {
//    cout << word.top();
            word.top();
        }

// QUEUE
// this struct sorts a set of elements in a particular order
// queue principle: first in first out (fifo)
// this means the first element inserted is the first one to be removed
// this can be thought as like a movie line, the first one in line, is the first one to be seated
        queue<int> qu;
        qu.empty(); // tests if the queue is empty
        qu.size(); // returns the size of the queue
        qu.push(2);
        qu.push(3);
        qu.push(6); // adds 2, 3 and 6 to the queue
        qu.front(); // returns the front element
        qu.back(); // returns the last element
        qu.pop(); // deletes the first element added (2)

// DEQUE (pronounced "DECK")
// a deque is similar to a queue but it is a, double ended queue
// therefore insertion and deletion can occur on either end of the data strut
// similar implementation to a queue
        deque<int> dq;
        dq.empty(); // tests if the deque is empty
        dq.size(); // returns the size of the deque
        dq.push_front(2);
        dq.push_front(3); // adds 2 and 3 to the FRONT of the deque
        dq.push_back(4);
        dq.push_back(5); // adds 4 and 5 to the END of the deque
// at this point, the deque struct would look like the following
// [3, 2, 4, 5]
        dq.front(); // returns the front element (3)
        dq.back(); // returns the last element (5)
        dq.pop_front();  // deletes the first element (3)
        dq.pop_back(); // deletes the last element (4)

// CUSTOM COMPARISON SORT
        int array[6] = {6, 8, 2, 4, 8, 1};
        sort(array, array + 6); // classic sort
// you could also do something called custom sort, shown below
        sort(array, array + 6, [](const int x, const int y) {
            return x > y;
        }); // This sorts the array from largest to smallest

// you could sort any kind of array, even with custom objects
// just need to compare two elements, of that data type in the custom comparator
// for example
        vector<pair<int, int>> pairv;
        pairv.emplace_back(1, 4);
        pairv.emplace_back(2, 9);
        pairv.emplace_back(3, 2);
        sort(pairv.begin(), pairv.end(), [](const pair<int, int> x, const pair<int, int> y) {
            return x.second < y.second;
        }); // sorts the pair vector by the SECOND element, in ascending order
    }

// prefix sum array and difference array
// PREFIX SUM ARRAY
// A prefix sum array, or psa for short, is given an array of numbers, A, we replace each element with the sum of itself and all the elements preceding it
// example
// a = [3, 5, 4, 1, 2]
// psa(a) = [3, 8, 12, 13, 15]
// o(n) time
// the psa array, must have enough space for n+1 ints
// psa function, shown below
void prefix_sum_array(int n, int array[n], int psa[n+1]) {
    psa[0] = array[0]; // first element remains the same!
    for(int i = 0; i < n; i++) {
        psa[i+1] = psa[i] + array[i]; // starting i+1 (1),
    }
}

// difference array
// a difference array, is given an array of numbers, we construct a new array by replacing each element by the difference between itself and the previous element, except for the first element, which we simply ignore
// example
// a = [3, 5, 4, 1, 2]
// d(a) = [3, 5 - 3, 4 - 5, 1 - 4, 2 - 1] // notice how the first element is not touched, but every element preceding
// d(a) = [3, 2, -1, -3, 1]
// o(n) time
// difference array, shown below
void difference_array(int n, int array[n], int d[n-1]) {
        for(int i = 0; i < n-1; i++) {
            d[i] = array[i+1] - array[i];
        }
}
// or if you want to mantain the first element, the following is another implmentation of the diffrence array
void difference_array_2(int n, int array[n], int d[n]) {
    d[0] = array[0];
    for(int i = 1; i < n; i++) {
        d[i] = array[i] - array[i-1];
    }
}

// difference array and prefix sum array carry our reverse process
// d(psa(a)) = a
// a = [9, 2, 6, 3, 1, 5, 0, 7]
// psa(a) = [9, 11, 17, 20, 21, 26, 26, 33]
// d(psa(a)) = [9, 2, 6, 3, 1, 5, 0, 7]


// PSA AND D ARRAY APPLICATIONS
// prefix sum array is frequently used to find range sum
// sum of l to r in psa is...
// psa[r] - psa[l-1]


// with the difference array, you are able to do range updates from l to r in constant time
// to do this, you must do the following
// given the array, obtain a difference array
// then for each query, given l, r and x (the amount you want to add in between the indexes), d[l] += x and d[r+1] -= x
// then do a simple psa and you will have the array with the updated ranges