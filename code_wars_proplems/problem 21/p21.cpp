//https://www.codewars.com/kata/5861d28f124b35723e00005e/train/cpp
#include <iostream>
using namespace std;
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
    uint32_t car_distance_can_reach = fuel_left * mpg;
    return car_distance_can_reach >= distance_to_pump ? true : false;

}
int main()
{
    zero_fuel(100, 25, 2);
}