#include<iostream>
using namespace std;
class area
{
	private:
		int a,b;
		public:
			void getdata()
			{
				int a,b,c;
				cout<<" enter length and breadth:";
				cin>>a>>b;
				
			}
			void displaydata()
			{
				int c;
				c= a*b;
				cout<< "the area is:" <<  c;
				
			}
};
		      int main()
		       {
			      	area a1;
					a1.getdata();
					a1.displaydata();
			
				}

