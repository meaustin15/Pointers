//  main.cpp
//  Allocation
//  Created by Matthew Austin on 3/7/16.
//  Copyright (c) 2016 Matt. All rights reserved.

#include <iostream>
#include <iomanip>

using namespace std;

void getData(int *pt, int num);
double avg(int *pt, int num);


int main()
{
    int num;
    int *pt = NULL; //change it to a literal type (aka prvalue)
    cout << "How Many Scores? "; //Ask the user how many scores they wish to enter
    cin >> num;
    pt = new int[num];

    getData(pt, num); //run void getData
    double ave = avg(pt, num); //ave will equal avg(pt, num)

    cout << "Average is " << ave; //display the average

    delete []pt; //delete the array, as the data is not in the pointer and has been displayed
    return 0;
}

void getData(int *pt, int num)
{
    for(int i=0; i < num; i++)
    {
        cout << "Enter Score " << i+1 << ": ";
        cin >> pt[i]; //Ask user to enter in the numbers that they want averaged
    }

}


double avg(int *pt, int num)
{
    double tot = 0;
    for(int i=0; i < num; i++)
    {
        tot += pt[i];//add the value to the total
    }
    double avg = tot/num; //divide the total by the number of scores that the user entered
    return avg; //return the result of tot/temp
}
