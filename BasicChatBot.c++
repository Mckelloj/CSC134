#include <iostream>
#include <string>

int main() 
{
    std::string userInput;

    std::cout << "ChatBot: Hello! How are you feeling today?\n";
    std::cout << "You: ";
    std::cin >> userInput;

    if (userInput == "good") 
    {
        std::cout << "ChatBot: That's awesome to hear!\n";
    } 
    
    else if (userInput == "bad") 
    {
        std::cout << "ChatBot: I'm sorry to hear that. Want to talk about it?\n";
    } 
    
    else if (userInput == "tired") 
    {
        std::cout << "ChatBot: Maybe you need some rest. Take it easy!\n";
    } 
    
    else 
    {
        std::cout << "ChatBot: Hmm, interesting. Tell me more.\n";
    }

    return 0;
}