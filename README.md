Name : Aakarshan Simkhada
UH ID : 1898617
# For picture Detail See ReadMe File Report.Doc file 


COSC4370-Interactive Computer Graphics
	
If we are able to plot the values of each pixels of octant’s circumference then we can easily reflect the pixels to other remaining octant’s circumference because of symmetric property of the circle.

1.	Objective :

	Implementation of the Circle Rasterization Method

	In this assignment we are implementing the Midpoint Circle Algorithm to determine each pixel in an Octants (division of circle in 8 equal parts (8-way symmetry) through its center and each part is called Octant).  

 

2.	Configuration :

	We know, the equation of circle is 

	X2 + Y2 = R2 when the center is (0,0), here R is the radius of the circle.

We will have 3 possible result, i.e.
	  	X2 + Y2 - R2 is equal to zero, - which means point lies on circle
	Or, 	X2 + Y2 - R2 is less than zero, - which means point lies inside the circle’s circumference
	Or, X2 + Y2 - R2 is greater than zero, - which means point lies outside the circle.

Now we find the Midpoint so that we can choose E or SE as our next point. We choose closest point as our next pixel point. 


From above figure, the Mid point of E and SE is given by,

M = ( Xk+1, Yk-1/2)

We suppose a decision parameter (Dk) on kth iteration which is given by,
Dk =  ( Xk+1)2+ ( Yk-1/2)2 – R2 on the midpoint. ------ eqn(i)

Now, for next iteration,
Dk+1 = ( Xk+1 +1)2+ ( Yk+1 -1/2)2 – R2 ----------------------- eqn(ii)

We Subtract eqn(ii) to eqn(i) so that we use the previous parameter for our next decision coming parameter in an iteration.

We get, 
	Dk+1 = Dk + 2Xk + 3 + Yk+1 2 - Yk - Yk+1 + Y

Now, if Dk is less than 0 then, we choose Yk+1 = Yk

Dk+1 =  Dk + 2Xk + 3                     ------- 1

And if Dk is greater than 0 then, we choose Yk+1 = Yk – 1

Dk+1 =  Dk + 2*(Xk – Yk) + 5       -------- 2

And initial decision parameter is
D = 5/4 – R                                 --------- 3,    because Xk¬ = 0 , Yk = R

We will use above 1 and 2 equation in our iteration to find the point and we use equation 3 as the initial value of decision parameter. 

3.	Project Details:

	I have used OpenGL for this assignment in my Linux Operating System. I have used above three equation in the rasterization function to get the points for the 1st octant 	of the circle.

	To run the project, Type following code in the terminal window:- 
	g++ main.cpp
	./a.out 200 


4.	Result:

	After running the code, it will generate a 200 x 200 image containing circular arc. The image file is uploaded as well as circle200.ppm.  


5.	Reference:

	For this assignment I took a reference of reading.pdf file which was provide to us along with the assignment. 
