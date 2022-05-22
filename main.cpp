#include <iostream>


int main(){

        std::cout << "Hello!!! Welcome to the Area or perimeter finders with understanding the concepts behind the problems. Happy cheating!" << std::endl;
            std::cout << "<==========Selection==========>\n" << std::endl;

        int aop;
        std::cout << "are you trying to find a perimeter or an area. \n Type '1' for finding Area \n Type '2' to find perimeter" << std::endl;
        std::cin >> aop;
    //Area of Triangle
        if (aop == 1) { 
            int shapearea;
            std::cout << "\n<============SHAPE============>" << std::endl;
            std::cout << "Which shape are we finding the area: \n Type  '1' for Triange \n Type '2' for Rectangle \n Type '3' for square \n Type '4' for circle" << std::endl;
            std::cin >> shapearea;
            std::cout << "\n<===========Problem===========>" << std::endl;
            if (shapearea == 1) {
                double at1; //area triangle 1
                double at2; //area triangle 2
                double atr; //Area Triangle Result
                std::cout << "Enter Base of triange: "  << std::endl;
                std::cin >> at1; //area triangle 1
                std::cout << "Enter height of triangle: " <<  std::endl;
                std::cin >> at2; 
                atr = {at1 * at2 * 0.5};
                std::cout << "Your Answer is: " << atr << std::endl;
            }
            if (shapearea == 2) {
                double ar1; //area rectangle 1
                double ar2; //area rectangle 2
                double arr; //Area Rectangle Result
                std::cout << "enter length of rectangle: " << std::endl;
                std::cin >> ar1;
                std::cout << "Enter breadth of rectange: " << std::endl;
                std::cin >> ar2;
                arr = {ar1 * ar2};
                std::cout << "Your Answer is: " << arr << std::endl;
            }
            if (shapearea == 3) {
                double as1; //area square 1
                double asr; ////area square result
                std::cout << "enter side of square: " << std::endl;
                std::cin >> as1;
                asr = {as1 * as1};
                std::cout << "Your answer is: " << asr << std::endl;
            }
            if (shapearea == 4) {
                double ac1f; //area circle 1 fraction
                double acrf; //area circle result fraction
                std::cout << "enter radius of circle: " << std::endl;
                std::cin >> ac1f;
                acrf = {ac1f * ac1f * 3.14};
                std::cout << "Your answer is: " << acrf << std::endl; 

                

            }
        }
        if (aop == 2) {
            int shapeperimeter;
            std::cout << "\n<============SHAPE============>" << std::endl;
            std::cout << "Which shape are we finding the perimeter: \n Type  '1' for Triange \n Type '2' for Rectangle \n Type '3' for square \n Type '4' for circle" << std::endl;
            std::cin >> shapeperimeter;
            std::cout << "\n<===========Problem===========>" << std::endl;
            if (shapeperimeter == 1) {
                double pt1; //perimeter triangle 1
                double pt2;
                double pt3;
                double ptr; //perimeter triangle result
                std::cout << "enter 1st side of triangle: " << std::endl;
                std::cin >> pt1;
                std::cout << "enter 2nd side of triangle: " << std::endl;
                std::cin >> pt2;
                std::cout << "enter 3rd side of triangle: " << std::endl;
                std::cin >> pt3;
                ptr = {pt1 + pt2 + pt3};
                std::cout << "Your answer is: " << ptr << std::endl;
            }
            if (shapeperimeter == 2) {
                double pr1; //perimeter rectangle 1
                double pr2; //perimeter rectangle 2
                double prr; //perimeter rectangle result
                std::cout << "enter length of rectangle: " << std::endl;
                std::cin >> pr1;
                std::cout << "enter breadth of rectangle: " << std::endl;
                std::cin >> pr2;
                prr = {2*(pr1 + pr2)};
                std::cout << "Your answer is: " << prr << std::endl;
            }
            if (shapeperimeter == 3) {
                double ps1; //perimeter square 1
                double psr; // perimeter square result
                std::cout << "enter side of square: " << std::endl;
                std::cin >> ps1;
                psr = { ps1 * 4 };
                std::cout << "Your answer is: " << psr << std::endl;
            }
            if (shapeperimeter == 4) {
                double pc1; //perimeter circle 1
                double pcr; //perimerter circle result
                std::cout << "Enter radius of circle: " << std::endl;
                std::cin >> pc1;
                pcr = { 2 * 3.14 * pc1};
                std::cout << "Your answer is: " << pcr << std::endl;
            }
        }
    return 0;
}