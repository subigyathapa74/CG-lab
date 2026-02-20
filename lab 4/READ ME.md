Title: Midpoint Circle Generation Algorithm
Algorithm

Input the radius of the circle and the coordinates of its center (xc, yc).

Initialize the starting point of the circle at the topmost position relative to the center.

Initialize the decision parameter used to determine the next pixel position.

Starting from the initial point, check the value of the decision parameter:

If the decision parameter is less than zero, select the next pixel in the horizontal direction.

Otherwise, select the next pixel diagonally.

For each selected point, calculate the corresponding symmetric points of the circle in the remaining octants.

Shift every calculated point according to the center coordinates (xc, yc) and plot the pixel on the screen.

Repeat the above steps until the entire circle is completed.

Close the graphics mode and terminate the program.

Conclusion

In this experiment, we learned how to draw a circle using the Midpoint Circle Generation Algorithm. The algorithm determines the circle points efficiently by using a decision parameter and symmetry. Since it avoids floating-point calculations, it provides faster execution and accurate circle generation in computer graphics applications.