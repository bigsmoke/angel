#include <set>
#include <string>


namespace Angel
{
    class Angel
    {
        public:
            Angel& parent;
            std::set<Angel&> children;
            std::string name;
    };

    class Buffer : public Angel
    {
    };

    class Integer : public Buffer
    {
    };

    class Step : public Angel
    {
    };

    class String : public Angel
    {
    };

    class Path : public Angel
    {
    }; 
}
