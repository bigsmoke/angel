#include <stack>
#include <set>

#include "BULLParser.hh"


using namespace Angel;

BULL::Parser::Parser() { };

void
BULL::Parser::parseStream(std::istream& inputStream)
{
    std::stack<char> blockOpeningStack;
    std::set<char> whitespaceCharacters =  {'\n', '\t', ' '};
    std::set<char> blockOpenIndicators = {'[', '('};
    std::set<char> blockCloseIndicators = {']', ')'};
    std::set<char> indicators = {'[', ']', '(', ')', '\\', '/', '|', '@', '#', '&', '^', '*', '?', '!', '+', '-', '<', '>'};
    std::set<char> heavyIndicators = {'[', ']', '(', ')', '\\', '/', '?'};
    std::set<char> nextExpectedIndicators = {'['};
    bool nextExpectedIsIndicator = true;
    bool nextExpectedIsName = false;

    for (std::string line; std::getline(inputStream, line);)
    {
        for (int i = 0; i < line.length(); i++)
        {
            char c = line[i];

            // Skip whitespace characters
            if (whitespaceCharacters.count(c) != 0) continue;

            // Refuse to continue when unexpected characters are encountered
            if (nextExpectedIsIndicator and nextExpectedIndicators.count(c) == 0)
            {
                std::cerr << "Expected indicator, got '" << c  << "'" << std::endl;
                return;
            }


            if (blockOpenIndicators.count(c) != 0)
            {
                blockOpeningStack.push(line[i]);
                nextExpectedIsName;
            }
            else if (blockOpeningStack.size() == 0)
            {
                std::cerr << "Expected '[' or '(', got '" << c << std::endl;
            }
            else if (blockCloseIndicators.count(c) != 0)
            {
                blockOpeningStack.pop();
                std::cerr << c << " block closed" << std::endl;
            }
        }
    }
};
