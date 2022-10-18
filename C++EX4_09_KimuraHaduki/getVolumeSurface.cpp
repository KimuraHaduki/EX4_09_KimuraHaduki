#pragma once
double getVolumeSurface(double x, double y, double z, double* surface) 
{
	*surface = 2 * (x * y) + 2 * (x * z) + 2 * (y * z);
	return x * y * z;
}