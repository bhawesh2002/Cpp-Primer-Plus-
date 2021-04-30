/*Here is a structure declaration:
struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};
a. Write a function that passes a box structure by value and that displays the
value of each member.
b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.
c. Write a simple program that uses these two functions.*/

#include <iostream>

struct box{
    char marker[40];
    float height;
    float width;
    float length;
    float volume;
};

void funct_a (box);
int funct_b(float h , float w , float l);

using namespace std;

int main(){
    box detials = {"Red Marker" , 8 , 2 , 6 , detials.height * detials.width * detials.length};
    funct_a(detials);
    float volume = funct_b( detials.height , detials.width , detials.length);
    return 0;
}

void funct_a (box contents){
    cout << "Marker: " << contents.marker << endl;
    cout << "Height: " << contents.height << endl;
    cout << "Width: " << contents.width << endl;
    cout << "Length: " << contents.length << endl;
    cout << "Volume: " << contents.volume << endl;
}

int funct_b(float h , float w , float l){
    float volume = h * w  * l;
    cout << "The volume of the Marker is : " << volume;
    return volume;     
}