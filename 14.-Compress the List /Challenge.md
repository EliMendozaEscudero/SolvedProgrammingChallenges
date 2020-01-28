# CHALLENGE:
You are given a strictly increasing sequence of integers A<sub>1</sub>,A<sub>2</sub>,…,A<sub>N</sub>. Your task is to compress this sequence.

The compressed form of this sequence is a sequence of ranges separated by commas (characters ','). A range is either an integer or a pair of integers separated by three dots (the string "..."). When each range a...b in the compressed form is decompressed into the subsequence (a,a+1,…,b), we should obtain the (comma-separated) sequence A again.

For each maximal contiguous subsequence (a,a+1,…,b) of A such that b≥a+2, the compressed form of A must contain the range a...b; if b≤a+1, such a sequence should not be compressed into a range. A contiguous subsequence is maximal if it cannot be extended by at least one element of A next to it. It can be proved that the compressed form of any sequence is unique (i.e. well-defined).
### Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A<sub>1</sub>,A<sub>2</sub>,…,A<sub>N</sub>.
### Output
For each test case, print a single line containing one string ― the compressed form of the given sequence.
### Constraints

 - 1≤T≤100
 - 1≤N≤100
 - 1≤A<sub>i</sub>≤1,000 for each valid i
 - A<sub>1</sub><A<sub>2</sub><…<A<sub>N</sub>

# Date:

January 27, 2020
# Taken from:
[https://www.codechef.com/problems/CMPRSS](https://www.codechef.com/problems/CMPRSS)

