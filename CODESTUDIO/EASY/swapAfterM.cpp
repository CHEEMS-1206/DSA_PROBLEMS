#include <bits/stdc++.h> 
// Given an array of ints and a num 'm' 
// you have to reverse the array after 'm'

// Algo - double iterator and swap

void reverseArray(vector<int> &arr , int m)
{
    int i= m+1; // starting next to 'm'
    int j=arr.size()-1;// till the last element
    while(i<j){
        swap(arr[i],arr[j]);// for every pair swap the elements and move the iterators
        i++;
        j--;
    }
}
