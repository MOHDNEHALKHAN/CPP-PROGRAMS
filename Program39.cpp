/*PROGRAM USING .this POINTER*/

class this_pointer_example
{
private:
    int data1;

public:
    int getdata()
    {
        return this->data1;
    }

    // Function using this pointer to set data1
    void setdata(int newval)
    {
        this->data1 = newval;
    }
};
