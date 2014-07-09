#ifndef INCLUDED_Constants
#define INCLUDED_Constants

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Constants)


class HXCPP_CLASS_ATTRIBUTES  Constants_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Constants_obj OBJ_;
		Constants_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Constants_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Constants_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Constants"); }

		static Float pixelsPerMeter;
		static Float densityOf20DegreeWater;
		static Float g;
		static Float oceanLevel;
};


#endif /* INCLUDED_Constants */ 
