#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include <string>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <limits>

int main()
{
	Reverse p1 = Reverse(); 
	int input0; 
	Reverse p2 = Reverse(); 
	std::string input1;
	//Truckloads p3 = Truckloads();
	//int input2;
	//int input3; 


	std::cin>> input0;
	std::cin>> input1;  
	//if (input0<0||std::cin.peek()=='.'||std::cin.fail())
	//{
		//std::cout << "ERROR ";
		//std::cin.clear();
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),' ');	
	//}
	//else
	//{
		std::cout << p1.reverseDigit(input0);
	//}
	std::cout << " "; 


	
	//if (isdigit(input1[0])!=0)
	//{
	//	std::cout << "ERROR ";
	//	std::cin.clear();
	//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),' ');
	//}
	//else
	//{
		std::cout << p2.reverseString(input1);
	//}
	//std::cout << " "; 


	//std::cin>> input2; 
	//std::cin>> input3; 
	
	//	if (std::cin.fail()||(std::cin.peek()=='.'))
	//		{
	//			std::cout << "ERROR ";
	//			std::cout << "ERROR" <<std::endl;
	//			std::cin.clear();
	//			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),' ');
	//		}
	//	else if ((input2<=0)||(input3<=0))
	//		{
	//			std::cout << "ERROR ";
	//			std::cout << "ERROR"<< std::endl;
	//			std::cin.clear();
	//			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),' ');
	//		}
	//	else
	//		{

	//			std::cout << " ";
	//			std::cout << p3.numTrucks(input2,input3) <<std::endl;
	//		}
	


	
	
	



	//EfficientTruckloads p4 = EfficientTruckloads();
	//int input4;
	//int input5; 
	//std::cout<<"enter crates: " <<std::endl; 
	//std::cin>> input4; 
	//std::cout<<"enter load size: " <<std::endl; 
	//std::cin>> input5; 
	//std::cout << p4.numTrucks(input4,input5) <<std::endl;


	return 0; 
	

}