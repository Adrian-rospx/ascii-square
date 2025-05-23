// geometric shapes and drawing
#pragma once

#include <vector>

#include "screen.h"

struct Vertex {
    float x;
    float y;
};

class Shape {
    Screen& scr;
public:
    std::vector<Vertex> Vertices;
    
    Shape(Screen* scr, const std::vector<Vertex>& Vertices) : scr(*scr), Vertices(Vertices) {}

    void draw_fill(const char character = '#');
    void draw_outline(const char character = '#');
};