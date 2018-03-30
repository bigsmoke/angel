#include <iostream>
#include <vector>


namespace Angel
{
    namespace BULL
    {
        /**
         * An angel is an _endpoint_ of a step (left or right in BULL).
         *
         * Angels must either exist as part of a path, be themselves a path, or be a subpath.
         *
         * Conceptually, an angel is not an object, although, in C++, it can only be represented as an object.
         * How much an angel is not an objects is exampflified by the fact that it's always a placeholder
         * 
         *    * An angel either
         */
        class Angel
        {
            public:
                bool isUnknown();
                bool isPath();

            protected:
                bool isUnknown;
                bool isPath;
                bool 
        };

        class Angels
        {
        };

        /**
         * A placeholder can represent any number of angels.
         */
        class Placeholder
        {
            enum class Type
            {
                UnknownAngel = (1 << 0),
                NamedAngel = (1 << 1),
                AngelDefinition = (1 << 2),
                UnknownAngelDefinition = (1 << 0) | (1 << 2),
                NamedAngelDefinition = (1 << 1) | (1 << 2),
                LeftmostSubstring = (1 << 3),
                Substring = (1 << 4),
                SubstringCount = (1 << 5),
                SubsequentSubstringCount = (1 << 6),
                CallingContext = (1 << 7),
                SuperpathContext = (1 << 8),
                CommandArgument = (1 << 9),
                AngelEvent = (1 << 10),
            };

            public:
                Placeholder(const Type type) : _type(type) {};
                Placeholder(const Type type, const int substringPosition)
                    : _type(type), _substringPosition(substringPosition) {};

                bool hasType(const Type type) {
                    return static_cast<int>(_type) & static_cast<int>(type) > 0;
                }

                int substringPosition(void)
                {
                    return _substringPosition;
                }

            private:
                Type _type
                int _substringPosition = 0;

        };

        class Step
        {
            protected:
                Placeholder* stepTarget;
        };

        class Point
        {
            protected:
                Step* fromStep;
                Step* toStep;
                bool pointsBack;
                Placeholder* relationship;
        };

        class Path
        {
            public:
                /**
                 * Jog along the steps of a path and return the imprint left by the heavy steps.
                 */
                Angels jog();       

            private:
                std::set<Step> steps;
        };

        class Parser
        {
            public:
                Parser();

                void parseStream(std::istream& inputStream)
                {
                    std::istream_iterator<int> 
                }

            private:
                Path* _atPath;
        };
    }
}
