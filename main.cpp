#include <iostream>


void functionName(){
     
        std::cout << "\n<=============================================================>\n\nHello!!! Welcome to the Area or perimeter finders with understanding the concepts behind the problems. Happy learning!\n" << std::endl;
            std::cout << "<==========Selection==========>" << std::endl;

        int aop;
        std::cout << "are you trying to find a perimeter or an area. \n Type '1' for finding Area \n Type '2' to find perimeter \n Type '3' for using all operations (+.-,*,/)\n Type '4' for converting Fractions to decimals" << std::endl;
        std::cin >> aop;
    //Area of Triangle
        if (aop == 1) { 
            int shapearea;
            std::cout << "\n<============SHAPE============>" << std::endl;
            std::cout << "Which shape are we finding the area: \n Type  '1' for Triange \n Type '2' for Rectangle \n Type '3' for square \n Type '4' for circle" << std::endl;
            std::cin >> shapearea;
            std::cout << "\n<===========Problem===========>" << std::endl;
            if (shapearea == 1) {
                int howat; //explaination
                double at1; //area triangle 1
                double at2; //area triangle 2
                double atr; //Area Triangle Result
                std::cout << "Enter Base of triange: "  << std::endl;
                std::cin >> at1; //area triangle 1
                std::cout << "Enter height of triangle: " <<  std::endl;
                std::cin >> at2; 
                atr = {at1 * at2 * 0.5};
                std::cout << "Your Answer is: " << atr << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howat;
                if (howat == 1) {
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "In this equation,\n The formula of finding the area of a Triangle is base multiplied by height multiplied by half.\n in this situation: " << at1 << " * " << at2 << " and divide it by half = " << atr << std::endl;
                } 
                if (howat == 2) {
                    std::cout << "Okay!" << std::endl; 
                }
            }
                  
            if (shapearea == 2) {
                int howar;//explaination
                double ar1; //area rectangle 1
                double ar2; //area rectangle 2
                double arr; //Area Rectangle Result
                std::cout << "enter length of rectangle: " << std::endl;
                std::cin >> ar1;
                std::cout << "Enter breadth of rectange: " << std::endl;
                std::cin >> ar2;
                arr = {ar1 * ar2};
                std::cout << "Your Answer is: " << arr << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howar;
                if (howar == 1){
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "In this equation\n The formula of finding the area of a Rectangle is length multiplied by breadth.\n in this situation: " << ar1 << " * " << ar2 << " = " << arr << std::endl;
                    }
                if (howar == 2) {
                    std::cout << "Okay!" << std::endl;  
                    }  
            }
            if (shapearea == 3) {
                int howas;
                double as1; //area square 1
                double asr; ////area square result
                std::cout << "enter side of square: " << std::endl;
                std::cin >> as1;
                asr = {as1 * as1};
                std::cout << "Your answer is: " << asr << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howas;
                if (howas == 1) {
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "In this equation\n The formula of finding the area of a Square is side multiplied by side.\n in this situation: " << as1 << " * " << as1 << " = " << asr << std::endl;
                    }
                if (howas == 2) {
                    std::cout << "Okay!" << std::endl;    
                    }
            }       
            if (shapearea == 4) {
                int howacf;
                double ac1f; //area circle 1 fraction
                double acrf; //area circle result fraction
                std::cout << "enter radius of circle: " << std::endl;
                std::cin >> ac1f;
                acrf = {ac1f * ac1f * 3.14};
                std::cout << "Your answer is: " << acrf << std::endl; 
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howacf;
                if (howacf == 1) {
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "In this equation,\n The formula of finding the area of a Circle is Pi*r*r(Radius). \n In this situation: 3.14 * " << ac1f << " * " << ac1f << " = " << acrf << std::endl;   
                }
                if (howacf == 2) {
                    std::cout << "Okay!" << std::endl;    
                }
            }
        }
        if (aop == 2) {
            int shapeperimeter;
            std::cout << "\n<============SHAPE============>" << std::endl;
            std::cout << "Which shape are we finding the perimeter: \n Type  '1' for Triange \n Type '2' for Rectangle \n Type '3' for square \n Type '4' for circle" << std::endl;
            std::cin >> shapeperimeter;
            std::cout << "\n<===========Problem===========>" << std::endl;
            if (shapeperimeter == 1) {
                int howpt;
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
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howpt;
                if (howpt == 1) {
                    std::cout << "\n<===========Solution===========> " << std::endl;
                    std::cout << "The formula to find The Perimeter of the triangle is Side A + B + C.\n In this situation: " << pt1 << " + " << pt2 << " + " << pt3 << " = " << ptr << std::endl;     
                    }
                if (howpt == 2) {
                    std::cout << "Okay!" << std::endl;    
                }
            }
            if (shapeperimeter == 2) {
                int howpr;
                double pr1; //perimeter rectangle 1
                double pr2; //perimeter rectangle 2
                double prr; //perimeter rectangle result
                std::cout << "enter length of rectangle: " << std::endl;
                std::cin >> pr1;
                std::cout << "enter breadth of rectangle: " << std::endl;
                std::cin >> pr2;
                prr = {2*(pr1 + pr2)};
                std::cout << "Your answer is: " << prr << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howpr;
                if (howpr == 1) {
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "The formula to find the Perimeter of the rectangle is l + b * 2.\n In this situation: " << pr1 << " + " << pr2 << " * 2 = " << prr << std::endl; 
                }
                if (howpr == 2) {
                    std::cout << "Okay!" << std::endl;    
                }
            }
            if (shapeperimeter == 3) {
                int howps;
                double ps1; //perimeter square 1
                double psr; // perimeter square result
                std::cout << "enter side of square: " << std::endl;
                std::cin >> ps1;
                psr = { ps1 * 4 };
                std::cout << "Your answer is: " << psr << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howps;
                if (howps == 1) {
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "The formula to find the perimeter of a square is Side * 4. \nIn this situation: " << ps1 << " * 4 = " << psr << std::endl;                     
                }
                if (howps == 2) {
                    std::cout << "Okay!" << std::endl;    
                }
            }
            if (shapeperimeter == 4) {
                int howpc;
                double pc1; //perimeter circle 1
                double pcr; //perimerter circle result
                std::cout << "Enter radius of circle: " << std::endl;
                std::cin >> pc1;
                pcr = { 2 * 3.14 * pc1};
                std::cout << "Your answer is: " << pcr << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howpc;
                 if (howpc == 1) {
                    std::cout << "\n<===========Solution===========>" << std::endl;
                    std::cout << "For finding the Perimeter of the circle, the formula is 2 * Pi * R.\n In this situation: " << "2 * 3.14 * " << pc1  << " = " << pcr << std::endl;
                }
                if (howpc == 2) {
                    std::cout << "Okay!" << std::endl;
                }
            } 
        }
        if (aop == 3) { //Operations
            double ao1; //all operatations 1
            double ao2;
            double aor;
            std::cout << "Enter 1st number for operation: " << std::endl;
            std::cin >> ao1;
            std::cout << "Enter 2nd number for operation: " << std::endl;
            std::cin >> ao2;
            aor = (ao1 - ao2);
            std::cout << "\n<===========Substraction===========>" << std::endl;
            std::cout << "Your 1st Substraction result is: " << ao1 << " - " << ao2 << " = " << aor << std::endl;
            aor = (ao2 - ao1); 
            std::cout << "Your 2nd Substraction result is: " << ao2 << " - " << ao1 << " = " << aor << std::endl;
            std::cout << "\n<=============Addition=============>" << std::endl;
            aor = (ao1 + ao2);
            std::cout << "Your Addition result is: " << ao1 << " + " << ao2 << " = " << aor << std::endl;
            std::cout << "\n<=============Division=============>" << std::endl;
            aor = (ao1 / ao2);
            std::cout << "Your 1st Division result is: " << ao1 << " / " << ao2 << " = " << aor << std::endl;
            aor = (ao2 / ao1);
            std::cout << "Your 2nd Division result is: " << ao2 << " / " << ao1 << " = " << aor << std::endl;
            std::cout << "\n<==========Multiplication==========>" << std::endl;
            aor = (ao1 * ao2);
            std::cout << "Your Multiplication result is: " << ao1 << " * " << ao2 << " = " << aor << std::endl;    
        }
        if (aop == 4){ //Fraction to decimal or Decimal to fraction 
                        int howftd;
                double ftdn; //fraction to decimal numerater
                double ftdd; //fraction to decimal denominater
                double dec;
                std::cout << "\n<===========Problem===========>" << std::endl;
                std::cout << "Please enter the numerater of the fraction: " << std::endl;
                std::cin >> ftdn;
                std::cout << "please enter the denominater of the fraction: " << std::endl;
                std::cin >> ftdd;
                dec = (ftdn/ftdd);
                std::cout << "Your Answer is: " << dec << std::endl;
                std::cout << "\n<===========Solution===========>" << std::endl;
                std::cout << "\nDo you want to know how to find the answer to this problem?\n Type '1' if yes\n Type '2' if no " << std::endl;
                std::cin >> howftd;
                if (howftd == 1) {
                    std::cout << "To convert a fraction into a decimal we must Divide the numerater and denominater. So in this case: \n" << ftdn << " / " << ftdd << " = " << dec << std::endl;
        }
        }
        }       
int main(){
    functionName();
    int check;
    while(1){
    std::cout << "\nDo you want to reuse this task? \n Type '1' if yes \n type '2' if no" << std::endl;
    std::cin >> check;
    if(check==1){
        functionName();
    }
    else{break;}
    }
   
  
    return 0;
}
