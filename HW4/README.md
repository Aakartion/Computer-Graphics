# 1898617
# For more image detail please see Detail_Report.doc file.

Detail report  for COSC4370 Fall 20 HW4 - OpenGL 


Objective
Objective of this Project practice little more deeply into OpenGL with 3D scene and along with that we will be adding some more features to a barebones ray tracer.

Environment

If there is no required libraries for openGL then first you should do follow STEP 1 for the setup.
On my HW3 I have already installed STEP 1 libraries, so I don’t have to do it again for this project. 
STEP 1: -
In this project we will be using the GLUT/freeglut, GLEW, GLFW and GLM library for our OpenGL code. If you are on Windows, we can find a freeglut 3.0.0 package for Visual Studio (MSVC) at http://www.transmissionzero.co.uk/software/freeglutdevel/. On OS X, GLUT should be installed by default. Finally, if we are on Linux and don’t have GLUT already installed, you should be able to install it by running sudo apt-get install freeglut3-dev or sudo yum install freeglut devel in a terminal. We have written the included Makefile so that the project should compile with it on Linux or OS X. For Windows, we will need to create a project in Visual Studio rather than using the Makefile.
For windows :
	Put glut.h inside “C:\Program
Files(x86)\Microsoft Visual Studio
10.0\VC\include\GL\” (you may need to create the directory GL with yourself).
 Put glut32.lib inside “C:\Program
Files\Microsoft Visual Studio 9.0\VC\lib\”.
Windows 32-Bit Users: Put glut32.dll inside
“C:\Windows\System32\”.
Windows 64-Bit Users: Put glut32.dll inside
“C:\Windows\SysWOW64\”.
For other Libraries:-
-	https://sourceforge.net/projects/glew/files/glew/1.13.0/
-	https://www.glfw.org/download.html
-	https://github.com/g-truc/glm/releases/tag/0.9.9.8
For linking all these libraries to my project I watched youtube videos which I have mentioned in the reference section.
For this assignment I have used Eigen library (3.1.1) for linear algebra which was provided to us and for more detail and to explore more about this library I visited eigen.tuxfamily.org.
Furthermore, I have added more files in the src and include directories and I have modified the Makefile. 

Project Details

In this project we directed to go through different header(.h) and .cpp which I have mentioned down below:-
-	Image.h/.cpp 
This provides the simple functionality for writing, .png images. For this to compile it requires libpng library.
-	Scene.h/.cpp
This stores the objects in a scene and performs basic ray tracing. This is an abstract class for representing a shape and also defines the Ray and HitRecord structs.
-	Sphere.h /.cpp
This is for the class of shape.
-	main.cpp
This is the entry point for the program which sets up a scene, initiates ray tracing and saves the output.  

I have added shape.h, a vector color and call a constructor to set the color for each object in red, green, and blue. 
In the problem 2 and 3 I change scene trace. In my problem 1 I added plane.h/cpp with the math logic. I have added Phong shading which is based on the problem 2.
For problem 4, I added support for mirrored surfaces that reflects rays of light according to the law of reflection. In my .cpp file I have commented which will tell everything what will create by the function.

I run my program by using visual studio in windows 10.






Result:
After successfully running the code I got following results:- 

  Problem 1    Problem 2

  Problem 3    Problem 4 






Reference:
For this assignment our class lecture helped me a lot. Beside our class lecture I took a reference of following links which is youtube video and course:-
-	https://learnopengl.com/
-	http://www.lemoda.net/c/write-png/
-	https://www.youtube.com/watch?v=W3gAzLwfIP0&list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2&ab_channel=TheCherno
-	http://www.cs.cornell.edu/courses/cs4620/2012fa/lectures/35raytracing.pdf

