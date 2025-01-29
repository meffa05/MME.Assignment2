#include<iostream>

#include<conio.h>

using namespace std;


//Maddie Effa


int GetLengthFromUser()//Length Function:Takes in the length that is input
{
	int L = 0;
	cin >> L;
	return L;
;
}
int GetWidthFromUser()//Width function:Takes in the width that is input
{
	int W = 0;
	cin >> W;
	return W;

}
int CalculateArea(int W, int L)//does the math
{
	return W * L;

}
void DisplayArea(int area)//Displays answer
{

	cout << "Area: "<<area;
}




int main()//Main Function
{
	cout << "Input Rectangle Length: ";//prompts user fr length
	int Length= GetLengthFromUser();//creates variable that is equal to what is returned from this function
	cout << "Input Rectangle Width: ";//prompts user for width
	int Width=GetWidthFromUser();//creates variable that is equal to what is returned from this function
	int area= CalculateArea(Length,Width);//uses created variable to do the calculation
	DisplayArea(area);//displays calculation with text
	(void)_getch();//wait for key press
	return 0;
}