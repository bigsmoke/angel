#include <iostream>
#include <vector>


namespace Angel
{
    namespace BULL
    {
        /*
        class Indicator
        {
            public:
                char indicator() = 0;
                bool canBeHeavy() = 0;
                bool isHeavy() = 0;
                bool isStep() = 0;
        };

        class Step : public Indicator
        {
            public:
                bool isStep() { return true; }; 
        };

        class StepLeft : public Indicator
        {
            public
                char indicator() { return '\\'; };
                bool canBeHeavy() { return true; };
                bool isHeavy();

            private:
                bool heavy;
        };

        class StepRight : public Indicator
        {
            public
                char indicator() { return '/'; };
                bool canBeHeavy() { return true; };
                bool isHeavy();

            private:
                bool heavy;
        };

        class StepUp : public Indicator
        {
            public:
                char indicator() { return '|'; };
                bool canBeHeavy() { return false; };
                bool isHeavy() { return false; };
        }

        class Point : public Indicator
        {
            public:
                bool canBeHeavy() { return false; };               
                bool isHeavy() { return false; };               
                bool isStep() { return false; };
        }

        class PointLeft : public Point
        {
            public:
                char indicator() { return '<'; };
        }

        class PointRight : public Point
        {
            public:
                char indicator() { return '>'; };
        }

        class Super : public Indicator
        {
            public:
                char indicator() { return '^'; };
                bool canBeHeavy() { return false; };               
                bool isHeavy() { return false; };               
                bool isStep() { return false; };
        }

        class Length : public Indicator
        {
            public:
                char indicator() { return '#'; };
                bool canBeHeavy() { return false; };               
                bool isHeavy() { return false; };               
                bool isStep() { return false; };
        };

        class Knot : public Indicator
        {
            public:
                char indicator() { return '&'; };
                bool canBeHeavy() { return false; };               
                bool isHeavy() { return false; };               
                bool isStep() { return false; };
                PointLeft& left;
                PointRight& right;
        }

        class Unspecified : public Indicator
        {
            public:
                char indicator() { return '?'; };
                bool canBeHeavy() { return true; };
                bool isHeavy();
                bool isStep() { return false; };

            private:
                bool heavy;
        };

        class Creation : public Indicator
        {
            public:
                char indicator() { return '+'; };
                bool canBeHeavy() { return false; };
                bool isHeavy() { return false; };
                bool isStep() { return false; };
        };

        class Argument : public Indicator
        {
            public:
                char indicator() { return '@'; };
                bool canBeHeavy() { return false; };
                bool isHeavy() { return false; };
                bool isStep() { return false; };
        };

        class BlockOpen : public Indicator
        {
            public:
                bool isStep() { return false; };
        };

        class BlockClose : public Indicator
        {
            public:
                bool isStep() { return false; };
        };

        class StaticOpen : public BlockOpen
        {
            public:
                char indicator() { return '['; };
                bool canBeHeavy() { return true; };
                bool isHeavy();

            private:
                bool heavy;
        };

        class StaticClose : public BlockClose
        {
            public:
                char indicator() { return ']'; };
                bool canBeHeavy() { return true; };
                bool isHeavy();

            private:
                bool heavy;
        };

        class DynamicOpen : public BlockOpen
        {
            public:
                char indicator() { return '('; };
                bool canBeHeavy() { return true; };
                bool isHeavy();

            private:
                bool heavy;
        };

        class DynamicClose : public BlockClose
        {
            public:
                char indicator() { return ')'; };
                bool canBeHeavy() { return true; };
                bool isHeavy();

            private:
                bool heavy;
        };

        class Block 
        {
            public:
                // Both should be either heavy or not!
                BlockOpen open;
                BlockClose close;
        };

        class StaticBlock : public Block
        {
        };

        class DynamicBlock : public Block
        {
        };

        class Rule  // Grammar
        {
            public:
                Indicator& matchingIndicator;
                list<Indicator> followers;
        };
        */

        class Parser
        {
            public:
                Parser();

                void parseStream(std::istream& inputStream);

            private:
        };
    }
}
