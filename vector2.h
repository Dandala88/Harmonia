#pragma once

namespace Harmonia
{
    struct Vector2
    {
        float x;
        float y;
        Vector2 operator*(float scalar) const;
        Vector2& operator+=(const Vector2& other);
        Vector2 operator+(const Vector2& other);
        float magnitude();
        Vector2 normalize();
    };
}