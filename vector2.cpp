#include "vector2.h"
#include <math.h>

namespace Harmonia
{
	Vector2 Vector2::operator*(float scalar) const {
		return { x * scalar, y * scalar };
	}

	Vector2& Vector2::operator+=(const Vector2& other) {
		x += other.x;
		y += other.y;
		return *this;
	}

	Vector2  Vector2::operator+(const Vector2& other) {
		*this += other;
		return *this;
	}

	float Vector2::magnitude() {
		return sqrt(x * x + y * y);
	}

	Vector2 Vector2::normalize() {
		float mag = magnitude();
		if (mag != 0) {
			return { x / mag, y / mag };
		}
		else {
			// Return a zero vector if the magnitude is zero
			return { 0.0, 0.0 };
		}
	}
}