import random
import re

def chatbot_response(user_input):
    responses = [
        (r"hello|hi|hey|greetings|what's up", "Hello! How can I assist you with C++ coding?"),
        (r"help|assist|support", "Of course! What specific C++ topic do you need help with?"),
        (r"loops|iteration|for loop|while loop|do-while", "C++ has several loops: for, while, and do-while. Would you like an example or a deeper explanation of loop control statements?"),
        (r"arrays|lists|vectors|collections", "Arrays in C++ allow you to store multiple values. Example: int arr[5] = {1,2,3,4,5}; Would you like to learn about dynamic arrays, STL vectors, or multidimensional arrays?"),
        (r"pointers|memory address|dereference", "Pointers store memory addresses. Example: int* ptr = &variable;. Do you want to explore pointer arithmetic, memory management, or smart pointers?"),
        (r"functions|methods|procedures", "Functions in C++ help modularize code. Syntax: returnType functionName(parameters) { body }. Would you like to discuss recursion, function overloading, or lambda functions?"),
        (r"oop|object-oriented|classes|objects|inheritance|polymorphism|encapsulation|abstraction", "C++ supports Object-Oriented Programming (OOP) with classes and objects. Are you interested in inheritance, polymorphism, encapsulation, or design patterns?"),
        (r"stl|standard template library|data structures|algorithms|vectors|maps|lists", "The Standard Template Library (STL) in C++ includes useful structures like vectors, lists, and maps. Want to dive into iterators, sorting algorithms, or custom comparators?"),
        (r"file handling|fstream|file io|reading files|writing files", "C++ allows file handling using fstream. Example: ifstream inputFile('file.txt');. Do you need help with reading, writing, handling binary files, or file parsing?"),
        (r"multithreading|threads|concurrency|parallelism|synchronization|mutex", "C++ supports multithreading via the <thread> library. Would you like to explore thread creation, synchronization, mutex locks, or condition variables?"),
        (r"error handling|exceptions|try catch|runtime errors|debugging", "C++ uses try-catch blocks for exception handling. Would you like help understanding standard exceptions, custom exceptions, or debugging techniques?"),
        (r"best practices|coding standards|performance optimization", "C++ best practices include memory management, avoiding memory leaks, efficient use of STL, and proper use of OOP principles. Need tips on performance optimization or clean coding?"),
        (r"bye|exit|quit|goodbye|see you", "Goodbye! Happy coding! If you need help in the future, feel free to ask!")
    ]
    
    for pattern, response in responses:
        if re.search(pattern, user_input, re.IGNORECASE):
            return response
    
    return "That's an interesting topic! Could you clarify your question or provide more details? I'm happy to help with any C++ concept."

# Simple chatbot loop
print("C++ Coding Chatbot: Type 'bye' to exit.")
while True:
    user_input = input("You: ")
    if re.search(r"bye|exit|quit|goodbye|see you", user_input, re.IGNORECASE):
        print("Chatbot: Goodbye!")
        break
    response = chatbot_response(user_input)
    print(f"Chatbot: {response}")
