
namespace // unnamed namespace
{
    int internalValue()
    {
        return 10;
    }

    class temp
    {
    public:
        int a;

        temp()
        {
            a = 100;
        }

        int print()
        {
            return a;
        }
    };
}
