Title: Ellipse Generation Algorithm

Algorithm

Input the x-radius, y-radius, and ellipse center (xc, yc).
Start from the top-most point of the ellipse.

Initialize the decision value for Region 1 (the part where the ellipse is more “flat” and you mainly move in x-direction).

Region 1 loop (start from the first point):

If the decision value says the next point is still inside the ellipse boundary:

Move to the next x position (increase x), keep y same.

Update the decision value.

Otherwise:

Move diagonally (increase x and decrease y).

Update the decision value.

Continue this until the boundary condition for switching regions is reached (the point where movement should mainly go downward instead of sideways).

Take the last point from Region 1 and initialize the decision value for Region 2.

Region 2 loop (the part where the ellipse is more “steep” and you mainly move in y-direction):

If the decision value says the next point is outside the ellipse boundary:

Move down (decrease y), keep x same.

Update the decision value.

Otherwise:

Move diagonally (increase x and decrease y).

Update the decision value.

Continue until y becomes zero.

For every point found in Region 1 and Region 2, plot the symmetric points in the other three quadrants (so you get the full ellipse).

Finally, shift every plotted point from origin to the actual center:

Add xc to x

Add yc to y
Then plot the pixel.