#include "vec2.h"
#include <math.h>

namespace Harmonia
{
	Vec2 Vec2::operator*(float scalar) const {
		return { x * scalar, y * scalar };
	}

	Vec2& Vec2::operator+=(const Vec2& other) {
		x += other.x;
		y += other.y;
		return *this;
	}

	Vec2  Vec2::operator+(const Vec2& other) {
		*this += other;
		return *this;
	}

	float Vec2::magnitude() {
		return sqrt(x * x + y * y);
	}

	Vec2 Vec2::normalize() {
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