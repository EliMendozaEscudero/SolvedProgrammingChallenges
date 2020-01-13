# CHALLENGE:

Edward Elric is chasing after Scar. To stop Edward, Scar creates  NN  barriers in the way, numbered from  11  to  NN. Each barrier Scar created is either one of the following two types.

 - Type 1 barrier - This barrier start from a height  XX  above the ground and extend till the sky.
 - Type 2 barrier - This barrier start from the ground and extend up to height  XX  above the ground.

![](https://codechef_shared.s3.amazonaws.com/download/HYC/External_contest_images/DCOD2019/problem1.png)
The height of Edward is  **H**  units and he has an alchemic life force of  **L**  units. Moreover, he can duck by  **Y<sub>1</sub>**  units and jump by height  **Y<sub>2</sub>**  units (as explained in the figures). He starts crossing barriers in sequence, starting from barrier  1  till the barrier  **N**. Whenever he can't pass a barrier by ducking or jumping (considered passed even when the barrier just touches him), he uses Alchemy to break the barrier. However, this costs him a single unit of his alchemic life force.

If after breaking a barrier no life force is left, Edward gets completely exhausted, unable to pass that barrier.  
How many barriers can Edward cross?

And remember never to call him a pipsqueak if his height is too short!
## Input:
-   The first line contains  **T**, the number of test cases. Then the test cases follow.
-   For each test case, the first line contains five integers  **N**,  **H**,  **Y<sub>1</sub>** ,  **Y<sub>2</sub>**  and  **L**.
-   The next  **N**  lines, each contain two integers  t<sub>i</sub>  and  **X<sub>i</sub>**  for the  i<sup>th</sup>  barrier where  t<sub>i</sub>=1  denotes a Type 1 Barrier and  t<sub>i</sub>=2  denotes a Type 2 barrier.

## Output:
For each test case print a single line containing the number of barriers Edward can pass.

## Constraints:
-   1≤T≤100
-   1≤N≤10<sup>3</sup>
-   2≤H≤10<sup>3</sup>
-   1≤Y<sub>1</sub><H
-   1≤Y<sub>2</sub>≤10<sup>3</sup>
-   1≤L≤N
-   1≤t<sub>i</sub>≤2
-  1≤X<sub>i</sub>≤10<sup>3</sup>
## Date:
December 18, 2019
## Taken from:
[https://www.codechef.com/problems/PIPSQUIK](https://www.codechef.com/problems/PIPSQUIK)
