#include<iostream>
using namespace std;//this is used to  declare std:: globally so you do not have to refrence it every time.
int main(){
    std::cout << "Hello World! \n";//This will output to the console hello World.
    //"\n"used for newline
    std::cout << "Hello second line! ";//here this line will not go down because /n is not used.
    std::cout << "Hello third line! \n";
    cout << "this line is printed by using global declaration of std.\n";
}
