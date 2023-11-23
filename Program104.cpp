/*PROGRAM USING TEMPLATE CLASS PARTIAL SPECIALIZATION*/

//base template class
template<typename T1, typename T2>
class X
{
};
            //partial specialization
template<typename T1>
class X<T1, int>
{
};
int main() {
               // generates an instantiation from the base template
X<char, char> xcc;
              //generates an instantiation from the partial specialization
X<char, int> xii;
return 0;
}