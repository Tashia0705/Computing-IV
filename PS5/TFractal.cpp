// Copyright Tashia Boddu 2021
#include <iostream>
#include <string>
#include <vector>
#include "Triangle.h"
#include <cmath>

void fTree(std::vector<Triangle> *triangles, double length, int depth,
           double xcenter, double ycenter) {
    if (depth < 0)
        return;

    triangles->push_back(Triangle(xcenter, ycenter, length));

    double height = (std::sqrt(3) / 2.0) * length;

    double xcenter_a = xcenter - (length / 2.0);
    double ycenter_a = ycenter - (2.0/3.0) * height;

    // calculate x,y center of triangle B
    double xcenter_b = xcenter + (3.0/4.0) * length;
    double ycenter_b = ycenter - (1.0/6.0) * height;

    // calculate x,y center of triangle C
    double xcenter_c = xcenter - (1.0/4.0) * length;
    double ycenter_c = ycenter + (5.0/6.0) * height;

    fTree(triangles, length / 2, depth - 1, xcenter_a, ycenter_a);
    fTree(triangles, length / 2, depth - 1, xcenter_b, ycenter_b);
    fTree(triangles, length / 2, depth - 1, xcenter_c, ycenter_c);
}


int main(int argcc, char* argv[]) {
    double length = std::stod(argv[1]);
    int depth = std::stoi(argv[2]);

    std::vector<Triangle> triangles;
    double centerx = 400;
    double centery = 400;
    triangles.clear();
    fTree(&triangles, length, depth, centerx, centery);

    sf::RenderWindow window(sf::VideoMode(800, 800), "Sierpinski Triangle");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        for (Triangle &x : triangles)
            window.draw(x);
        window.display();
    }
    return 0;
}
