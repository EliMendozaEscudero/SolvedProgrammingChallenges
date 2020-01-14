# CHALLENGE: 
For her next karate demonstration, Ada will break some bricks.

Ada stacked three bricks on top of each other. Initially, their widths (from top to bottom) are **W**<sub>1</sub>,**W**<sub>2</sub>,**W**<sub>3</sub>.

Ada's strength is  **S**. Whenever she hits a stack of bricks, consider the largest  **k**≥0  such that the sum of widths of the topmost  **k**  bricks does not exceed  **S**; the topmost  **k**  bricks break and are removed from the stack. Before each hit, Ada may also decide to reverse the current stack of bricks, with no cost.

Find the minimum number of hits Ada needs in order to break all bricks if she performs the reversals optimally. You are not required to minimise the number of reversals.

### Input

-   The first line of the input contains a single integer  **T**  denoting the number of test cases. The description of  **T**  test cases follows.
-   The first and only line of each test case contains four space-separated integers  **S**,  **W**<sub>1</sub>,**W**<sub>2</sub> and **W**<sub>3</sub>.

### Output

For each test case, print a single line containing one integer ― the minimum required number of hits.

### Constraints

-   1≤**T**≤64
-   1≤**S**≤8
-   1≤**W**<sub>i</sub>≤2  for each valid  **i**
-   it is guaranteed that Ada can break all bricks
- 
- # Date:
- January 13, 2020
- # Taken from:
- [https://www.codechef.com/problems/BRKBKS](https://www.codechef.com/problems/BRKBKS)
