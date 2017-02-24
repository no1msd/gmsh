//================================================
//    Maillage du cube
//================================================

h = 0.05;
Point(1) = {0,2,0,25*h};
Point(2) = {0,-1,0,h};
Point(3) = {1,-0.2,0,2*h};
Point(4) = {1.5,-0.8,0,h};
Point(5) = {2,0.1,0,2*h};
Point(6) = {3,-0.6,0,h};
Point(7) = {4,2,0,10*h};
Point(8) = {0.4,-0.9,0,h};
CatmullRom(1) = {2,8,3,4,5,6,7};
Line(2) = {7,1};
Line(3) = {1,2};
Line Loop(4) = {3,1,2};
Plane Surface(5) = {4};
Extrude { {0,1,0}, {0,0,0}, Pi/2} { Surface {5}; Layers{10}; Recombine;}
