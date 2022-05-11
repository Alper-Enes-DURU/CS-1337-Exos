#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double width, length;
    public:
        class NegativeLength // This exception class has members 
        {
            private:
                double len;
            public:
                NegativeLength(double len_)
                {
                    len = len_;
                }
                double getLen() const
                {
                    return len;
                }
        };
        class NegativeWidth // This exception class has members
        {
            private:
                double wid;
            public:
                NegativeWidth(double wid_)
                {
                    wid = wid_;
                }
                double getWid() const
                {
                    return wid;
                }
        };
        void setLength(double length_)
        {
            if (length < 0)
            {
                throw NegativeLength(length_);
            }
            else
            {
                length = length_;
            }
        }
        void setWidth(double width_)
        {
            if (width_ < 0)
            {
                throw NegativeWidth(width_);
            }
            else
                width = width_;
        }
};

int main()
{
    Rectangle r;
    double length, width;


    bool valid = false;

    while(!valid)
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        
        try
        {
            r.setLength(length);
            cout << "Length successfully set to " << length << endl;
            r.setWidth(width);
            cout << "Width successfully set to " << width << endl;
            valid = true;
        }
        catch(Rectangle::NegativeLength lengthError)
        {
            cout << "Error, you inputted " << lengthError.getLen()
                << ", length cannot be negative" << endl;
        }
        catch(Rectangle::NegativeWidth widthError)
        {
            cout << "Error, you inputted " << widthError.getWid()
                << ", width cannot be negative" << endl;
        }
    }
    
    return 0;
}