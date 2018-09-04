#include "xml3all.h"
using namespace std;

int main()
{
	char* a1 = R"(<doc>
   <e1   />
   <e2   ></e2>
   <e3   name = "elem3"   id="elem3"   >yu<h></h></e3>
   <e4   name="elem4"   aid="elem4" bz="ha" ddd="ew2" zsf="fa" aa=""   ></e4>
</doc>)";


	XML3::XMLElement e = a1;
	XML3::XMLSerialization ser;
	ser.Canonical = true;
	string s = e.Serialize(&ser);
	MessageBoxA(0, s.c_str(), 0, 0);

}