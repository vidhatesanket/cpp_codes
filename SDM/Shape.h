#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	
	
	public:
		
		Shape();
		~Shape();
		virtual int Area(){
		
		return 0;
		
		}  
		virtual void Display()=0;
	protected:
	
};

#endif
