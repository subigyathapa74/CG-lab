Title: Digital Differential Analyzer (DDA) Algorithm
Algorithm

Start the program.

Declare the required variables: x, y, x1, y1, x2, y2, k, dx, dy, s, xi, yi and initialize the graphics driver using DETECT.

Initialize the graphics mode by providing the path of the Turbo C graphics folder.

Input the two endpoints of the line and store the starting point in (x1, y1) and the ending point in (x2, y2).

Plot the first pixel at (x1, y1) using the putpixel() function and assign x = x1 and y = y1.

Calculate the differences:

dx = x2 - x1

dy = y2 - y1

If |dx| > |dy|, set s = |dx|.

Otherwise, set s = |dy|.

Compute the increment values:

xi = dx / s

yi = dy / s

Initialize k = 0 and repeat the following steps until k < s:

x = x + xi

y = y + yi

Plot the pixel at the calculated (x, y) position using putpixel() with the specified color.

Close the graphics mode and terminate the program.

Conclusion

In this experiment, we studied and implemented the Digital Differential Analyzer (DDA) line drawing algorithm. The DDA algorithm generates a straight line by incrementally calculating intermediate pixel positions between two endpoints. Since the algorithm involves floating-point calculations, the computed values must be rounded to the nearest integer to obtain pixel coordinates, which may introduce minor rounding errors. Despite this limitation, the DDA algorithm is simple to understand and provides an effective method for drawing lines in computer graphics.