#pragma once

namespace Harmonia
{
    struct Vec2
    {
        float x;
        float y;
        Vec2 operator*(float scalar) const;
        Vec2& operator+=(const Vec2& other);
        Vec2 operator+(const Vec2& other);
        float magnitude();
        Vec2 normalize();
    };
}