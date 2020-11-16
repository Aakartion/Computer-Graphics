#include <iostream>
#include "Image.h"
#include "Scene.h"
#include "Sphere.h"
#include "Plane.h"
using namespace std;
using namespace Raytracer148;
using namespace Eigen;

int main() {
    Image im(400, 400);

    Scene scene;

    Vector3d center, center1;
    center1[0] = -0.5;
    center1[1] = 1;
    center1[2] = 2.5;
	
    scene.addShape(new Sphere(center1, 0.75, 0.5, 0.2, 0.6));

    center[0] = .5;
    center[1] = -0.75;
    center[2] = 1.75;
	scene.addShape(new Sphere(center, .5, 0.2, 0.3, 0.8));

	center[0] = .5;
	center[1] = -0.5;
	center[2] = 5.75;
	scene.addShape(new Plane(center, center1, 0.1, 0.5, 0.4));


    scene.render(im);

    im.writePNG("test.png");

    return 0;
}
