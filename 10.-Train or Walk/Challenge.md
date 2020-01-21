﻿# CHALLENGE:
Chefland has all the cities on a straight line. There are **N** cities in Chefland numbered 1 to **N**. City ***i*** is located at coordinate **x**<sub>i</sub> on the x-axis. Guru wants to travel from city **A** to city **B**. He starts at time **t**=0. He has following choices to travel.

He can walk 1 metre in **P** secs.
There is a train that travels from city **C** to city **D** which travels 1 metre in **Q** secs which starts at time t=**Y** secs. Guru can take the train only at city **C** and leave the train only at city **D**.
Can you help Guru find the minimum time he will need to travel from city **A** to **B**. Note that you cannot board the train after time **t** =**Y**.
### Input
-   First line will contain  **T**, number of testcases. Then the testcases follow.
-   First line of each testcase contains eight space separated integers  **N**,**A**,**B**,**C**,**D**,**P**,**Q**,**Y**
-   Second line of each testcase contains  **N** space-separated integers with the  ***i***-th integer representing  **x**<sub>i</sub>.

### Output

For each testcase, output in a single line containing the minimum travel time.
### Constraints
1≤**T**≤300 
2≤**N**≤300
−1000≤**x**<sub>i</sub>≤1000
0≤**Y**≤100000
1≤**A**,**B**,**C**,**D**≤n
**A**≠**B**
**C**≠**D**
1≤**P**,**Q**≤100
**x**<sub>i</sub><**x**<sub>j</sub> if ***i***<***j***
# Date:
January 21, 2020
# Taken from:
[https://www.codechef.com/problems/WALKFAST](https://www.codechef.com/problems/WALKFAST)


