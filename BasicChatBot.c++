#include <iostream>
#include <string>
#include <algorithm>

enum Mood 
{
    GOOD,
    BAD,
    TIRED,
    BORED,
    UNKNOWN
};

enum Event 
{
    CODE,
    HOME,
    SCHOOL,
    LIFE,
    EXPLAIN
};



Mood getMoodFromInput(const std::string& input) 
{
    std::string word = input;
    std::transform(word.begin(), word.end(), word.begin(), ::tolower); 

    if (word == "good") return GOOD;
    if (word == "happy") return GOOD;
    if (word == "bored") return BORED;
    if (word == "bad") return BAD;
    if (word == "tired") return TIRED;
    return UNKNOWN;
}

int main() 
{
    std::string userInput;

    
    std::cout << "ChatBot: Hello! How are you feeling today?\n";
    std::cout << "Good\nBad\nBored\nTired";
    std::cout << "You: ";
    std::cin >> userInput;

    Mood mood = getMoodFromInput(userInput);

    switch (mood) 
    {
        case GOOD:
            std::cout << "ChatBot: That's awesome to hear!\n";
            break;

        case BAD:
            std::cout << "ChatBot: I'm sorry to hear that. Want to talk about it?\n";
            break;

        case TIRED:
            std::cout << "ChatBot: Maybe you need some rest. Take it easy!\n";
            break;

            case BORED:
            std::cout << "ChatBot: What can we do to make your day enjoyable? \n";
            break;

        default:
            std::cout << "ChatBot: Hmm, interesting. Tell me more.\n";
            break;
    }

    return 0;
}