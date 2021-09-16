/*******************************************************************
*   the clock angle problem finfing the angle between the hour and the minute 
*   hand of an analog clock at given time
*   the angle in degree 
*   degree(hr) = H * (360/12) + (M*360)/(12*60)
*   degree(min) = M * (360/60)
*   example : 
*            input 1 = 5:30
*            output 1= 15 (degree)
*
*            input 2 = 9:00 
*            output2 = 90 (degree)
*************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int clockAngle(int Hr, int min)
{
    int h = (Hr * 360) / 12 + (min * 360)/(12 * 60);
    int m = min * (360 / 60);
    int angle = abs(h - m);
    if (angle > 180){
        angle = 360 - angle;
    }
    return (angle);
}
int main()
{
    int h = 9;
    int min = 00;
    printf("%d(degree)\n", clockAngle(h, min));
    return(0);
}