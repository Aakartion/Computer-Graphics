#ifndef PLANE_H
#define PLANE_H

#include "Shape.h"

namespace Raytracer148 {
	class Plane : public Shape {
	public:
		Plane(Eigen::Vector3d &normal, Eigen::Vector3d position, double red, double green, double blue) : n(normal), p(position), rd(red), gr(green), bl(blue) {}

		virtual HitRecord intersect(const Ray &ray);

	private:
		Eigen::Vector3d n;
		Eigen::Vector3d p;
		double  rd, gr, bl;
	};
}

#endif

