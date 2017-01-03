#include <iostream>

namespace Angel
{
    class BULLStep
    {
        const char INDICATE_LEFT = '\\';
        const char INDICATE_RIGHT = '/';
        const char INDICATE_UP = '|';

        public:
            BULLStep();
            ~BULLStep();
            char direction; 
    };

    struct BULLPath
    {
        std::vector<BULLPath> subPaths;
        std::vector<BULLStep> steps;
        BULLPath& superPath;
    };

    class BULLParser
    {
        public:
            BULLParser();

            void parseStream(std::istream& inputStream);

        private:
    };
}
