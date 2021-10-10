#include <iostream>

int main()
{
    char Message[1000];

    std::cout << "Enter your message (1000 signs maximum, use \"_\" as space bar):\n";
    std::cin >> Message;
    std::cout << "\n";
    
    for (int i = 0; i < strlen(Message); i++) 
    {
        if ((Message[i] < 65) || (Message[i] > 90 && Message[i] < 95) || (Message[i] > 95 && Message[i] < 97) || (Message[i] > 122))
        {
            std::cout << "Unexpected symbols try again(1000 signs maximum):\n";
            std::cin >> Message;
            std::cout << "\n";
        }
    }
    
    for (int i = 0; i < strlen(Message); i++) 
    {
        if (Message[i] == 122)
            Message[i] = 96;

        else if (Message[i] == 121)
            Message[i] = 95;

        else if (Message[i] == 120)
            Message[i] = 94;

        else if (Message[i] == 90)
            Message[i] = 64;

        else if (Message[i] == 89)
            Message[i] = 63;

        else if (Message[i] == 88)
            Message[i] = 62;

        else if (Message[i] == 95)
            Message[i] = 92;
      

        Message[i] += 3;
    }
    
    std::cout << "Caesar shifer result:\n" << Message << "\n";

    return 0;
}