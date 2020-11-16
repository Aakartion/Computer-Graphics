#include "Plane.h"
#include <limits>
using namespace Raytracer148;
using namespace Eigen;
using namespace std;

HitRecord Plane::intersect(const Ray &ray) {
	HitRecord result;
	result.t = -1;

	// set up n dot (P-Q) = 0 => N * (E +tD - Q) =0, find t = N *(Q-E) / N
	float NdotD = (ray.direction).dot(n);
	if (NdotD == 0) return result; // no hit!

	
	float t = (p - ray.origin).dot(n)/ NdotD; //search for t

	if (t < 0)
	{
		return result; // no hit
	}
	if (t >= 0) {
		result.t = t; //hit
	}


	result.position = ray.origin + result.t * ray.direction; //P = E +td
	result.normal = (result.position - n).normalized(); 
	result.color[0] = (rd);
	result.color[1] = (gr);
	result.color[2] = (bl);
	return result;
}

