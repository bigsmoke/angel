#include <iostream>
#include <vector>
#include <assert.h>


namespace Angel
{
    /**
     * An angel is an _endpoint_ of a step (left or right in BULL).
     *
     * Angels must either exist as part of a path, be themselves a path, or be a subpath.
     *
     * Conceptually, an angel is not an object, although, in C++, it can only be represented as an object.
     * How much an angel is not an objects is exampflified by the fact that it's always a placeholder
     */
    class Angel
    {
        public:
        protected:
    };

    namespace BULL
    {
        class Step;
        class Seat;
        class Path;
        class Placeholder;

        /**
         * A `Seat` can either be:
         *
         *     * a `Placeholder` for any amount of `Angel`s, or
         *     * a sub`Path`.
         *
         * During a `Jog`, one or more `Ass`es are unfolded for every `Step`. Once these `Ass`es have fully
         * taken shape, they are `Seat`ed, and, when the `Step` was _heavy_, an `Imprint` is added to the
         * `Jog`.
         *
         * Seat / Ass : 
         * Step / Imprint
         *
         * Each `Seat` keeps track of only one `Step`—the step to it.
         * There can only be one `Step` _to_ a seat, but any amount of steps _from_ that `Seat` to the next steps.
         */
        class Seat
        {
            public:
                Seat(Step* step)
                    : _step(step)
                {};

            private:
                Step* _step;
        };

        /**
         * A placeholder can represent any number of angels.
         */
        class Placeholder : public Seat
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
                Placeholder(Step* step, const Type type)
                    : Seat(step), _type(type)
                {};

                Placeholder(Step* step, const Type type, const int substringPosition)
                    : Seat(step), _type(type), _substringPosition(substringPosition)
                {
                    assert(hasType(Type::Substring));
                };

                bool hasType(const Type type)
                {
                    return (static_cast<int>(_type) & static_cast<int>(type)) > 0;
                };

                int substringPosition(void)
                {
                    return _substringPosition;
                };

                Step* step()
                {
                    return _step;
                };

            private:
                Type _type;
                int _substringPosition = 0;
                Step* _step;

        };

        /**
         * dfdf
         *
         * [         ] \ … / [ ^ ]
         * Placeholder \ … /
         *
         * Path / Jog :
         */
        class Path : public Seat
        {
            public:
                /**
                 * Jog along the steps of a path and return the imprint left by the heavy steps.
                 */
                void jog();       

            private:
                std::vector<Step> steps;
        };

        class Step
        {
            public:
                ~Step()
                {
                    delete from;
                    delete to;
                    delete through;
                };

            protected:
                Step* previous;
                Step* next;
                Seat* from;
                Seat* to;
                Seat* through;
                bool symmetrical;
        };

        class Parser
        {
            public:
                class Exception
                {
                    public:
                        Exception(std::string message) : _message(message) {} 

                        std::string message()
                        {
                            return this->_message;
                        }

                    private:
                        std::string _message;
                };

                Parser()
                {};

                void parseStream(std::istream& inputStream)
                {
                    std::string unparsed;

                    char c;
                    while (inputStream >> c)
                    {
                        if (c == ' ' or c == '\t' or c == '\n')
                        {
                            continue;  // Ignore most whitespace
                        }

                        unparsed += c;

                        if (_atPath == NULL)
                        {
                            if (c != '[' and c != '(')
                            {
                                throw Exception(std::string("Expected block opening, got '") + unparsed + "' instead.");
                            }
                        }
                    }
                }

            private:
                Path* _atPath = NULL;
        };
    }
}

int main(int argc, char* argv[])
{
    Angel::BULL::Parser parser;
    try
    {
        parser.parseStream(std::cin);
    }
    catch (Angel::BULL::Parser::Exception exception)
    {
        std::cout << exception.message();
        return 1;
    }
}

// vim: set filetype=cpp tabstop=4 shiftwidth=4 softtabstop=4 expandtab:
