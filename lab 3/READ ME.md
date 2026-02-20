Title: Bresenham Line Drawing Algorithm
Algorithm

Input the two endpoints of the line and store the starting point as (x0, y0) and the ending point as (x1, y1).

Plot the initial point (x0, y0) on the screen.

Compute the differences:

Δx = x1 − x0

Δy = y1 − y0
Also calculate the constants 2Δy and 2Δy − 2Δx.

Initialize the decision parameter using the formula:

𝑝
0
=
2
Δ
𝑦
−
Δ
𝑥
p
0
	​

=2Δy−Δx

Starting from k = 0, for each x position along the line, perform the following steps:

If p_k < 0, plot the next point at (x_k + 1, y_k) and update the decision parameter as:

𝑝
𝑘
+
1
=
𝑝
𝑘
+
2
Δ
𝑦
p
k+1
	​

=p
k
	​

+2Δy

Otherwise, plot the next point at (x_k + 1, y_k + 1) and update the decision parameter as:

𝑝
𝑘
+
1
=
𝑝
𝑘
+
2
Δ
𝑦
−
2
Δ
𝑥
p
k+1
	​

=p
k
	​

+2Δy−2Δx

Repeat Step 5 for (Δx − 1) iterations until the final endpoint is reached.

Conclusion

In this experiment, we studied and implemented the Bresenham line drawing algorithm. This algorithm generates straight lines efficiently using only integer arithmetic, avoiding floating-point calculations and rounding errors. As a result, it produces more accurate and visually smoother lines compared to the DDA algorithm. Due to its efficiency and precision, the Bresenham algorithm is widely used in computer graphics applications.